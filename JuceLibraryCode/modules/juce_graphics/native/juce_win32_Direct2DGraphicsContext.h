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

#ifndef __JUCE_DIRECT2DLOWLEVELGRAPHICSCONTEXT_JUCEHEADER__
#define __JUCE_DIRECT2DLOWLEVELGRAPHICSCONTEXT_JUCEHEADER__

class Direct2DLowLevelGraphicsContext   : public LowLevelGraphicsContext
{
public:
    Direct2DLowLevelGraphicsContext (HWND hwnd_);
    ~Direct2DLowLevelGraphicsContext();

    bool isVectorDevice() const;

    void setOrigin (int x, int y);
    void addTransform (const AffineTransform& transform);
    float getScaleFactor();
    bool clipToRectangle (const Rectangle<int>& r);
    bool clipToRectangleList (const RectangleList& clipRegion);
    void excludeClipRectangle (const Rectangle<int>& r);
    void clipToPath (const Path& path, const AffineTransform& transform);
    void clipToImageAlpha (const Image& sourceImage, const AffineTransform& transform);
    bool clipRegionIntersects (const Rectangle<int>& r);
    Rectangle<int> getClipBounds() const;
    bool isClipEmpty() const;

    //==============================================================================
    void saveState();
    void restoreState();
    void beginTransparencyLayer (float opacity);
    void endTransparencyLayer();

    //==============================================================================
    void setFill (const FillType& fillType);
    void setOpacity (float newOpacity);
    void setInterpolationQuality (Graphics::ResamplingQuality quality);

    //==============================================================================
    void fillRect (const Rectangle<int>& r, bool replaceExistingContents);
    void fillPath (const Path& path, const AffineTransform& transform);
    void drawImage (const Image& sourceImage, const AffineTransform& transform);

    //==============================================================================
    void drawLine (const Line <float>& line);
    void drawVerticalLine (int x, float top, float bottom);
    void drawHorizontalLine (int y, float left, float right);

    void setFont (const Font& newFont);
    const Font& getFont();
    void drawGlyph (int glyphNumber, const AffineTransform& transform);
    bool drawTextLayout (const AttributedString&, const Rectangle<float>&);

    //==============================================================================
    void resized();
    void clear();
    void start();
    void end();

private:
    HWND hwnd;
    ComSmartPtr <ID2D1HwndRenderTarget> renderingTarget;
    ComSmartPtr <ID2D1SolidColorBrush> colourBrush;
    Rectangle<int> bounds;

    class SavedState
    {
    public:
        SavedState (Direct2DLowLevelGraphicsContext& owner_);
        ~SavedState();
        void clearClip();
        void clipToRectangle (const Rectangle<int>& r);
        void clearPathClip();
        void clipToPath (ID2D1Geometry* geometry);
        void clearRectListClip();
        void clipToRectList (ID2D1Geometry* geometry);
        void clearImageClip();
        void clipToImage (const Image& image, const AffineTransform& transform);
        void popClips();
        void pushClips();
        void setFill (const FillType& newFillType);
        void clearFont();
        void setFont (const Font& newFont);
        void createFont();
        void setOpacity (float newOpacity);
        void clearFill();
        void createBrush();

        //==============================================================================
        //xxx most of these members should probably be private...

        Direct2DLowLevelGraphicsContext& owner;

        Point<int> origin;

        Font font;
        float fontHeightToEmSizeFactor;
        IDWriteFontFace* currentFontFace;
        ComSmartPtr <IDWriteFontFace> localFontFace;

        FillType fillType;

        Image image;
        ComSmartPtr <ID2D1Bitmap> bitmap; // xxx needs a better name - what is this for??

        Rectangle<int> clipRect;
        bool clipsRect, shouldClipRect;

        ComSmartPtr <ID2D1Geometry> complexClipGeometry;
        D2D1_LAYER_PARAMETERS complexClipLayerParams;
        ComSmartPtr <ID2D1Layer> complexClipLayer;
        bool clipsComplex, shouldClipComplex;

        ComSmartPtr <ID2D1Geometry> rectListGeometry;
        D2D1_LAYER_PARAMETERS rectListLayerParams;
        ComSmartPtr <ID2D1Layer> rectListLayer;
        bool clipsRectList, shouldClipRectList;

        Image maskImage;
        D2D1_LAYER_PARAMETERS imageMaskLayerParams;
        ComSmartPtr <ID2D1Layer> bitmapMaskLayer;
        ComSmartPtr <ID2D1Bitmap> maskBitmap;
        ComSmartPtr <ID2D1BitmapBrush> bitmapMaskBrush;
        bool clipsBitmap, shouldClipBitmap;

        ID2D1Brush* currentBrush;
        ComSmartPtr <ID2D1BitmapBrush> bitmapBrush;
        ComSmartPtr <ID2D1LinearGradientBrush> linearGradient;
        ComSmartPtr <ID2D1RadialGradientBrush> radialGradient;
        ComSmartPtr <ID2D1GradientStopCollection> gradientStops;

    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SavedState);
    };

    SavedState* currentState;
    OwnedArray<SavedState> states;

    static D2D1_RECT_F rectangleToRectF (const Rectangle<int>& r);
    static const D2D1_COLOR_F colourToD2D (const Colour& c);
    static const D2D1_POINT_2F pointTransformed (int x, int y, const AffineTransform& transform = AffineTransform::identity);
    static void rectToGeometrySink (const Rectangle<int>& rect, ID2D1GeometrySink* sink);
    static ID2D1PathGeometry* rectListToPathGeometry (const RectangleList& clipRegion);
    static void pathToGeometrySink (const Path& path, ID2D1GeometrySink* sink, const AffineTransform& transform, int x, int y);
    static ID2D1PathGeometry* pathToPathGeometry (const Path& path, const AffineTransform& transform, const Point<int>& point);
    static const D2D1::Matrix3x2F transformToMatrix (const AffineTransform& transform);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Direct2DLowLevelGraphicsContext);
};

#endif   // __JUCE_DIRECT2DLOWLEVELGRAPHICSCONTEXT_JUCEHEADER__
