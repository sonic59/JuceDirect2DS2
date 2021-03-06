/*
  ==============================================================================

   This file is part of the JUCE library - "Jules' Utility Class Extensions"
   Copyright 2004-11 by Raw Material Software Ltd.

  ------------------------------------------------------------------------------

   JUCE can be redistributed and/or modified under the terms of the GNU General
   Public License (Version 2), as published by the Free Software Foundation.
   A copy of the license is included in the JUCE distribution, or can be found
   online at www.gnu.org/licenses.

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.rawmaterialsoftware.com/juce for more information.

  ==============================================================================
*/

void MACAddress::findAllAddresses (Array<MACAddress>& result)
{
    ifaddrs* addrs = nullptr;

    if (getifaddrs (&addrs) == 0)
    {
        for (const ifaddrs* cursor = addrs; cursor != nullptr; cursor = cursor->ifa_next)
        {
            sockaddr_storage* sto = (sockaddr_storage*) cursor->ifa_addr;
            if (sto->ss_family == AF_LINK)
            {
                const sockaddr_dl* const sadd = (const sockaddr_dl*) cursor->ifa_addr;

                #ifndef IFT_ETHER
                 #define IFT_ETHER 6
                #endif

                if (sadd->sdl_type == IFT_ETHER)
                    result.addIfNotAlreadyThere (MACAddress (((const uint8*) sadd->sdl_data) + sadd->sdl_nlen));
            }
        }

        freeifaddrs (addrs);
    }
}

//==============================================================================
bool Process::openEmailWithAttachments (const String& targetEmailAddress,
                                        const String& emailSubject,
                                        const String& bodyText,
                                        const StringArray& filesToAttach)
{
  #if JUCE_IOS
    //xxx probably need to use MFMailComposeViewController
    jassertfalse;
    return false;
  #else
    JUCE_AUTORELEASEPOOL

    String script;
    script << "tell application \"Mail\"\r\n"
              "set newMessage to make new outgoing message with properties {subject:\""
           << emailSubject.replace ("\"", "\\\"")
           << "\", content:\""
           << bodyText.replace ("\"", "\\\"")
           << "\" & return & return}\r\n"
              "tell newMessage\r\n"
              "set visible to true\r\n"
              "set sender to \"sdfsdfsdfewf\"\r\n"
              "make new to recipient at end of to recipients with properties {address:\""
           << targetEmailAddress
           << "\"}\r\n";

    for (int i = 0; i < filesToAttach.size(); ++i)
    {
        script << "tell content\r\n"
                  "make new attachment with properties {file name:\""
               << filesToAttach[i].replace ("\"", "\\\"")
               << "\"} at after the last paragraph\r\n"
                  "end tell\r\n";
    }

    script << "end tell\r\n"
              "end tell\r\n";

    NSAppleScript* s = [[NSAppleScript alloc] initWithSource: juceStringToNS (script)];
    NSDictionary* error = nil;
    const bool ok = [s executeAndReturnError: &error] != nil;
    [s release];

    return ok;
  #endif
}

//==============================================================================
} // (juce namespace)

using namespace juce;

//==============================================================================
#define JuceURLConnection MakeObjCClassName(JuceURLConnection)

@interface JuceURLConnection  : NSObject
{
@public
    NSURLRequest* request;
    NSURLConnection* connection;
    NSMutableData* data;
    Thread* runLoopThread;
    bool initialised, hasFailed, hasFinished;
    int position;
    int64 contentLength;
    NSDictionary* headers;
    NSLock* dataLock;
}

- (JuceURLConnection*) initWithRequest: (NSURLRequest*) req withCallback: (URL::OpenStreamProgressCallback*) callback withContext: (void*) context;
- (void) dealloc;
- (void) connection: (NSURLConnection*) connection didReceiveResponse: (NSURLResponse*) response;
- (void) connection: (NSURLConnection*) connection didFailWithError: (NSError*) error;
- (void) connection: (NSURLConnection*) connection didReceiveData: (NSData*) data;
- (void) connectionDidFinishLoading: (NSURLConnection*) connection;

- (BOOL) isOpen;
- (int) read: (char*) dest numBytes: (int) num;
- (int) readPosition;
- (void) stop;
- (void) createConnection;

@end

class JuceURLConnectionMessageThread  : public Thread
{
public:
    JuceURLConnectionMessageThread (JuceURLConnection* owner_)
        : Thread ("http connection"),
          owner (owner_)
    {
    }

    ~JuceURLConnectionMessageThread()
    {
        stopThread (10000);
    }

    void run()
    {
        [owner createConnection];

        while (! threadShouldExit())
        {
            JUCE_AUTORELEASEPOOL
            [[NSRunLoop currentRunLoop] runUntilDate: [NSDate dateWithTimeIntervalSinceNow: 0.01]];
        }
    }

private:
    JuceURLConnection* owner;
};


@implementation JuceURLConnection

- (JuceURLConnection*) initWithRequest: (NSURLRequest*) req
                          withCallback: (URL::OpenStreamProgressCallback*) callback
                           withContext: (void*) context;
{
    [super init];
    request = req;
    [request retain];
    data = [[NSMutableData data] retain];
    dataLock = [[NSLock alloc] init];
    connection = nil;
    initialised = false;
    hasFailed = false;
    hasFinished = false;
    contentLength = -1;
    headers = nil;

    runLoopThread = new JuceURLConnectionMessageThread (self);
    runLoopThread->startThread();

    while (runLoopThread->isThreadRunning() && ! initialised)
    {
        if (callback != nullptr)
            callback (context, -1, (int) [[request HTTPBody] length]);

        Thread::sleep (1);
    }

    return self;
}

- (void) dealloc
{
    [self stop];

    deleteAndZero (runLoopThread);
    [connection release];
    [data release];
    [dataLock release];
    [request release];
    [headers release];
    [super dealloc];
}

- (void) createConnection
{
    NSUInteger oldRetainCount = [self retainCount];
    connection = [[NSURLConnection alloc] initWithRequest: request
                                                 delegate: self];

    if (oldRetainCount == [self retainCount])
        [self retain]; // newer SDK should already retain this, but there were problems in older versions..

    if (connection == nil)
        runLoopThread->signalThreadShouldExit();
}

- (void) connection: (NSURLConnection*) conn didReceiveResponse: (NSURLResponse*) response
{
    (void) conn;
    [dataLock lock];
    [data setLength: 0];
    [dataLock unlock];
    initialised = true;
    contentLength = [response expectedContentLength];

    [headers release];
    headers = nil;

    if ([response isKindOfClass: [NSHTTPURLResponse class]])
        headers = [[((NSHTTPURLResponse*) response) allHeaderFields] retain];
}

- (void) connection: (NSURLConnection*) conn didFailWithError: (NSError*) error
{
    (void) conn;
    DBG (nsStringToJuce ([error description]));
    hasFailed = true;
    initialised = true;

    if (runLoopThread != nullptr)
        runLoopThread->signalThreadShouldExit();
}

- (void) connection: (NSURLConnection*) conn didReceiveData: (NSData*) newData
{
    (void) conn;
    [dataLock lock];
    [data appendData: newData];
    [dataLock unlock];
    initialised = true;
}

- (void) connectionDidFinishLoading: (NSURLConnection*) conn
{
    (void) conn;
    hasFinished = true;
    initialised = true;

    if (runLoopThread != nullptr)
        runLoopThread->signalThreadShouldExit();
}

- (BOOL) isOpen
{
    return connection != nil && ! hasFailed;
}

- (int) readPosition
{
    return position;
}

- (int) read: (char*) dest numBytes: (int) numNeeded
{
    int numDone = 0;

    while (numNeeded > 0)
    {
        int available = jmin (numNeeded, (int) [data length]);

        if (available > 0)
        {
            [dataLock lock];
            [data getBytes: dest length: available];
            [data replaceBytesInRange: NSMakeRange (0, available) withBytes: nil length: 0];
            [dataLock unlock];

            numDone += available;
            numNeeded -= available;
            dest += available;
        }
        else
        {
            if (hasFailed || hasFinished)
                break;

            Thread::sleep (1);
        }
    }

    position += numDone;
    return numDone;
}

- (void) stop
{
    [connection cancel];

    if (runLoopThread != nullptr)
        runLoopThread->stopThread (10000);
}

@end

namespace juce
{

//==============================================================================
class WebInputStream  : public InputStream
{
public:
    //==============================================================================
    WebInputStream (const String& address_, bool isPost_, const MemoryBlock& postData_,
                    URL::OpenStreamProgressCallback* progressCallback, void* progressCallbackContext,
                    const String& headers_, int timeOutMs_, StringPairArray* responseHeaders)
      : connection (nil),
        address (address_), headers (headers_), postData (postData_), position (0),
        finished (false), isPost (isPost_), timeOutMs (timeOutMs_)
    {
        JUCE_AUTORELEASEPOOL
        connection = createConnection (progressCallback, progressCallbackContext);

        if (responseHeaders != nullptr && connection != nil && connection->headers != nil)
        {
            NSEnumerator* enumerator = [connection->headers keyEnumerator];
            NSString* key;

            while ((key = [enumerator nextObject]) != nil)
                responseHeaders->set (nsStringToJuce (key),
                                      nsStringToJuce ((NSString*) [connection->headers objectForKey: key]));
        }
    }

    ~WebInputStream()
    {
        close();
    }

    //==============================================================================
    bool isError() const        { return connection == nil; }
    int64 getTotalLength()      { return connection == nil ? -1 : connection->contentLength; }
    bool isExhausted()          { return finished; }
    int64 getPosition()         { return position; }

    int read (void* buffer, int bytesToRead)
    {
        jassert (buffer != nullptr && bytesToRead >= 0);

        if (finished || isError())
        {
            return 0;
        }
        else
        {
            JUCE_AUTORELEASEPOOL
            const int bytesRead = [connection read: static_cast <char*> (buffer) numBytes: bytesToRead];
            position += bytesRead;

            if (bytesRead == 0)
                finished = true;

            return bytesRead;
        }
    }

    bool setPosition (int64 wantedPos)
    {
        if (wantedPos != position)
        {
            finished = false;

            if (wantedPos < position)
            {
                close();
                position = 0;
                connection = createConnection (0, 0);
            }

            skipNextBytes (wantedPos - position);
        }

        return true;
    }

    //==============================================================================
private:
    JuceURLConnection* connection;
    String address, headers;
    MemoryBlock postData;
    int64 position;
    bool finished;
    const bool isPost;
    const int timeOutMs;

    void close()
    {
        [connection stop];
        [connection release];
        connection = nil;
    }

    JuceURLConnection* createConnection (URL::OpenStreamProgressCallback* progressCallback,
                                         void* progressCallbackContext)
    {
        NSMutableURLRequest* req = [NSMutableURLRequest  requestWithURL: [NSURL URLWithString: juceStringToNS (address)]
                                                            cachePolicy: NSURLRequestReloadIgnoringLocalCacheData
                                                        timeoutInterval: timeOutMs <= 0 ? 60.0 : (timeOutMs / 1000.0)];

        if (req == nil)
            return nil;

        [req setHTTPMethod: nsStringLiteral (isPost ? "POST" : "GET")];
        //[req setCachePolicy: NSURLRequestReloadIgnoringLocalAndRemoteCacheData];

        StringArray headerLines;
        headerLines.addLines (headers);
        headerLines.removeEmptyStrings (true);

        for (int i = 0; i < headerLines.size(); ++i)
        {
            const String key (headerLines[i].upToFirstOccurrenceOf (":", false, false).trim());
            const String value (headerLines[i].fromFirstOccurrenceOf (":", false, false).trim());

            if (key.isNotEmpty() && value.isNotEmpty())
                [req addValue: juceStringToNS (value) forHTTPHeaderField: juceStringToNS (key)];
        }

        if (isPost && postData.getSize() > 0)
            [req setHTTPBody: [NSData dataWithBytes: postData.getData()
                                             length: postData.getSize()]];

        JuceURLConnection* const s = [[JuceURLConnection alloc] initWithRequest: req
                                                                   withCallback: progressCallback
                                                                    withContext: progressCallbackContext];

        if ([s isOpen])
            return s;

        [s release];
        return nil;
    }

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WebInputStream);
};

InputStream* URL::createNativeStream (const String& address, bool isPost, const MemoryBlock& postData,
                                      OpenStreamProgressCallback* progressCallback, void* progressCallbackContext,
                                      const String& headers, const int timeOutMs, StringPairArray* responseHeaders)
{
    ScopedPointer <WebInputStream> wi (new WebInputStream (address, isPost, postData,
                                                           progressCallback, progressCallbackContext,
                                                           headers, timeOutMs, responseHeaders));

    return wi->isError() ? nullptr : wi.release();
}
