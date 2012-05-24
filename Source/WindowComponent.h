/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  4 May 2012 5:23:31pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_4E0A87AB__
#define __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_4E0A87AB__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class WindowComponent  : public Component,
                         public ButtonListener
{
public:
    //==============================================================================
    WindowComponent ();
    ~WindowComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* jucelogo96_png;
    static const int jucelogo96_pngSize;


    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Array<Label*> textLabels;
    Array<Label*> sizeLabels;
    String currentEngine;
    OpenGLContext openGLContext;
    AttributedString asDirect;
    AttributedString asTextLayout;
    TextLayout textLayout;
    //[/UserVariables]

    void changeRenderingEngine(const String& newEngine);
    void changeLabels(Font& f, const String& text, const String& size);
    void addTextLabelsToArray();
    void addSizeLabelsToArray();

    //==============================================================================
    TextButton* cmdRSoftware;
    TextButton* cmdROpengl;
    TextButton* cmdRDirect2d;
    Label* lblCurrent;
    Label* lblRenderer;
    Label* lblSize70;
    Label* lblSize75;
    Label* lblSize80;
    Label* lblSize85;
    Label* lblSize90;
    Label* lblSize95;
    Label* lblSize100;
    Label* lblSize105;
    Label* lblSize110;
    Label* lblSize115;
    Label* lblSize120;
    Label* lblSize125;
    Label* lblSize130;
    Label* lblSize135;
    Label* lblText9;
    Label* lblText10;
    Label* lblText11;
    Label* lblText12;
    Label* lblText13;
    Label* lblText14;
    Label* lblText15;
    Label* lblText16;
    Label* lblText17;
    Label* lblText18;
    Label* lblText19;
    Label* lblText20;
    Label* lblText21;
    Label* lblText22;
    Label* lblText23;
    Label* lblText24;
    Label* lbl24;
    Label* lbl23;
    Label* lbl22;
    Label* lbl21;
    Label* lbl20;
    Label* lbl19;
    Label* lbl18;
    Label* lbl17;
    Label* lbl16;
    Label* lbl15;
    Label* lbl14;
    Label* lbl13;
    Label* lbl12;
    Label* lbl11;
    Label* lbl10;
    Label* lbl9;
    TextButton* cmdLang1;
    TextButton* cmdLang2;
    TextButton* cmdLang3;
    TextButton* cmdLang4;
    TextButton* cmdLang5;
    Image cachedImage_jucelogo96_png;
    Path internalPath1;
    Path internalPath2;
    Path internalPath3;
    Path internalPath4;
    Path internalPath5;
    Path internalPath6;


    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    WindowComponent (const WindowComponent&);
    const WindowComponent& operator= (const WindowComponent&);
};


#endif   // __JUCER_HEADER_WINDOWCOMPONENT_WINDOWCOMPONENT_4E0A87AB__
