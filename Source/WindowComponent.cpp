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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "WindowComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
WindowComponent::WindowComponent ()
    : cmdRSoftware (0),
      cmdROpengl (0),
      cmdRDirect2d (0),
      lblCurrent (0),
      lblRenderer (0),
      lblSize70 (0),
      lblSize75 (0),
      lblSize80 (0),
      lblSize85 (0),
      lblSize90 (0),
      lblSize95 (0),
      lblSize100 (0),
      lblSize105 (0),
      lblSize110 (0),
      lblSize115 (0),
      lblSize120 (0),
      lblSize125 (0),
      lblSize130 (0),
      lblSize135 (0),
      lblText9 (0),
      lblText10 (0),
      lblText11 (0),
      lblText12 (0),
      lblText13 (0),
      lblText14 (0),
      lblText15 (0),
      lblText16 (0),
      lblText17 (0),
      lblText18 (0),
      lblText19 (0),
      lblText20 (0),
      lblText21 (0),
      lblText22 (0),
      lblText23 (0),
      lblText24 (0),
      lbl24 (0),
      lbl23 (0),
      lbl22 (0),
      lbl21 (0),
      lbl20 (0),
      lbl19 (0),
      lbl18 (0),
      lbl17 (0),
      lbl16 (0),
      lbl15 (0),
      lbl14 (0),
      lbl13 (0),
      lbl12 (0),
      lbl11 (0),
      lbl10 (0),
      lbl9 (0),
      cmdLang1 (0),
      cmdLang2 (0),
      cmdLang3 (0),
      cmdLang4 (0),
      cmdLang5 (0),
      cachedImage_jucelogo96_png (0)
{
    addAndMakeVisible (cmdRSoftware = new TextButton (L"new button"));
    cmdRSoftware->setButtonText (L"Software Renderer");
    cmdRSoftware->addListener (this);

    addAndMakeVisible (cmdROpengl = new TextButton (L"new button"));
    cmdROpengl->setButtonText (L"OpenGL Renderer");
    cmdROpengl->addListener (this);

    addAndMakeVisible (cmdRDirect2d = new TextButton (L"new button"));
    cmdRDirect2d->setButtonText (L"Direct2D Renderer");
    cmdRDirect2d->addListener (this);

    addAndMakeVisible (lblCurrent = new Label (L"new label",
                                               L"Current Renderer:"));
    lblCurrent->setFont (Font (15.0000f, Font::plain));
    lblCurrent->setJustificationType (Justification::centredLeft);
    lblCurrent->setEditable (false, false, false);
    lblCurrent->setColour (TextEditor::textColourId, Colours::black);
    lblCurrent->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblRenderer = new Label (L"new label",
                                                L"Software Renderer"));
    lblRenderer->setFont (Font (15.0000f, Font::plain));
    lblRenderer->setJustificationType (Justification::centredLeft);
    lblRenderer->setEditable (false, false, false);
    lblRenderer->setColour (TextEditor::textColourId, Colours::black);
    lblRenderer->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize70 = new Label (L"new label",
                                              L"Size 7.0\n"));
    lblSize70->setFont (Font (7.0000f, Font::plain));
    lblSize70->setJustificationType (Justification::centred);
    lblSize70->setEditable (false, false, false);
    lblSize70->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize70->setColour (Label::textColourId, Colours::azure);
    lblSize70->setColour (TextEditor::textColourId, Colours::black);
    lblSize70->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize75 = new Label (L"new label",
                                              L"Size 7.5\n"));
    lblSize75->setFont (Font (7.5000f, Font::plain));
    lblSize75->setJustificationType (Justification::centred);
    lblSize75->setEditable (false, false, false);
    lblSize75->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize75->setColour (Label::textColourId, Colours::azure);
    lblSize75->setColour (TextEditor::textColourId, Colours::black);
    lblSize75->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize80 = new Label (L"new label",
                                              L"Size 8.0\n"));
    lblSize80->setFont (Font (8.0000f, Font::plain));
    lblSize80->setJustificationType (Justification::centred);
    lblSize80->setEditable (false, false, false);
    lblSize80->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize80->setColour (Label::textColourId, Colours::azure);
    lblSize80->setColour (TextEditor::textColourId, Colours::black);
    lblSize80->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize85 = new Label (L"new label",
                                              L"Size 8.5\n"));
    lblSize85->setFont (Font (8.5000f, Font::plain));
    lblSize85->setJustificationType (Justification::centred);
    lblSize85->setEditable (false, false, false);
    lblSize85->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize85->setColour (Label::textColourId, Colours::azure);
    lblSize85->setColour (TextEditor::textColourId, Colours::black);
    lblSize85->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize90 = new Label (L"new label",
                                              L"Size 9.0\n"));
    lblSize90->setFont (Font (9.0000f, Font::plain));
    lblSize90->setJustificationType (Justification::centred);
    lblSize90->setEditable (false, false, false);
    lblSize90->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize90->setColour (Label::textColourId, Colours::azure);
    lblSize90->setColour (TextEditor::textColourId, Colours::black);
    lblSize90->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize95 = new Label (L"new label",
                                              L"Size 9.5\n"));
    lblSize95->setFont (Font (9.5000f, Font::plain));
    lblSize95->setJustificationType (Justification::centred);
    lblSize95->setEditable (false, false, false);
    lblSize95->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize95->setColour (Label::textColourId, Colours::azure);
    lblSize95->setColour (TextEditor::textColourId, Colours::black);
    lblSize95->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize100 = new Label (L"new label",
                                               L"Size 10.0\n"));
    lblSize100->setFont (Font (10.0000f, Font::plain));
    lblSize100->setJustificationType (Justification::centred);
    lblSize100->setEditable (false, false, false);
    lblSize100->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize100->setColour (Label::textColourId, Colours::azure);
    lblSize100->setColour (TextEditor::textColourId, Colours::black);
    lblSize100->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize105 = new Label (L"new label",
                                               L"Size 10.5\n"));
    lblSize105->setFont (Font (10.5000f, Font::plain));
    lblSize105->setJustificationType (Justification::centred);
    lblSize105->setEditable (false, false, false);
    lblSize105->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize105->setColour (Label::textColourId, Colours::azure);
    lblSize105->setColour (TextEditor::textColourId, Colours::black);
    lblSize105->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize110 = new Label (L"new label",
                                               L"Size 11.0\n"));
    lblSize110->setFont (Font (11.0000f, Font::plain));
    lblSize110->setJustificationType (Justification::centred);
    lblSize110->setEditable (false, false, false);
    lblSize110->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize110->setColour (Label::textColourId, Colours::azure);
    lblSize110->setColour (TextEditor::textColourId, Colours::black);
    lblSize110->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize115 = new Label (L"new label",
                                               L"Size 11.5\n"));
    lblSize115->setFont (Font (11.5000f, Font::plain));
    lblSize115->setJustificationType (Justification::centred);
    lblSize115->setEditable (false, false, false);
    lblSize115->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize115->setColour (Label::textColourId, Colours::azure);
    lblSize115->setColour (TextEditor::textColourId, Colours::black);
    lblSize115->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize120 = new Label (L"new label",
                                               L"Size 12.0\n"));
    lblSize120->setFont (Font (12.0000f, Font::plain));
    lblSize120->setJustificationType (Justification::centred);
    lblSize120->setEditable (false, false, false);
    lblSize120->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize120->setColour (Label::textColourId, Colours::azure);
    lblSize120->setColour (TextEditor::textColourId, Colours::black);
    lblSize120->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize125 = new Label (L"new label",
                                               L"Size 12.5\n"));
    lblSize125->setFont (Font (12.5000f, Font::plain));
    lblSize125->setJustificationType (Justification::centred);
    lblSize125->setEditable (false, false, false);
    lblSize125->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize125->setColour (Label::textColourId, Colours::azure);
    lblSize125->setColour (TextEditor::textColourId, Colours::black);
    lblSize125->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize130 = new Label (L"new label",
                                               L"Size 13.0\n"));
    lblSize130->setFont (Font (13.0000f, Font::plain));
    lblSize130->setJustificationType (Justification::centred);
    lblSize130->setEditable (false, false, false);
    lblSize130->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize130->setColour (Label::textColourId, Colours::azure);
    lblSize130->setColour (TextEditor::textColourId, Colours::black);
    lblSize130->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblSize135 = new Label (L"new label",
                                               L"Size 13.5\n"));
    lblSize135->setFont (Font (13.5000f, Font::plain));
    lblSize135->setJustificationType (Justification::centred);
    lblSize135->setEditable (false, false, false);
    lblSize135->setColour (Label::backgroundColourId, Colour (0xff000064));
    lblSize135->setColour (Label::textColourId, Colours::azure);
    lblSize135->setColour (TextEditor::textColourId, Colours::black);
    lblSize135->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText9 = new Label (L"new label",
                                             L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText9->setFont (Font (9.0000f, Font::plain));
    lblText9->setJustificationType (Justification::centredLeft);
    lblText9->setEditable (false, false, false);
    lblText9->setColour (TextEditor::textColourId, Colours::black);
    lblText9->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText10 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText10->setFont (Font (10.0000f, Font::plain));
    lblText10->setJustificationType (Justification::centredLeft);
    lblText10->setEditable (false, false, false);
    lblText10->setColour (TextEditor::textColourId, Colours::black);
    lblText10->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText11 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText11->setFont (Font (11.0000f, Font::plain));
    lblText11->setJustificationType (Justification::centredLeft);
    lblText11->setEditable (false, false, false);
    lblText11->setColour (TextEditor::textColourId, Colours::black);
    lblText11->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText12 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText12->setFont (Font (12.0000f, Font::plain));
    lblText12->setJustificationType (Justification::centredLeft);
    lblText12->setEditable (false, false, false);
    lblText12->setColour (TextEditor::textColourId, Colours::black);
    lblText12->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText13 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText13->setFont (Font (13.0000f, Font::plain));
    lblText13->setJustificationType (Justification::centredLeft);
    lblText13->setEditable (false, false, false);
    lblText13->setColour (TextEditor::textColourId, Colours::black);
    lblText13->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText14 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText14->setFont (Font (14.0000f, Font::plain));
    lblText14->setJustificationType (Justification::centredLeft);
    lblText14->setEditable (false, false, false);
    lblText14->setColour (TextEditor::textColourId, Colours::black);
    lblText14->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText15 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText15->setFont (Font (15.0000f, Font::plain));
    lblText15->setJustificationType (Justification::centredLeft);
    lblText15->setEditable (false, false, false);
    lblText15->setColour (TextEditor::textColourId, Colours::black);
    lblText15->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText16 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText16->setFont (Font (16.0000f, Font::plain));
    lblText16->setJustificationType (Justification::centredLeft);
    lblText16->setEditable (false, false, false);
    lblText16->setColour (TextEditor::textColourId, Colours::black);
    lblText16->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText17 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText17->setFont (Font (17.0000f, Font::plain));
    lblText17->setJustificationType (Justification::centredLeft);
    lblText17->setEditable (false, false, false);
    lblText17->setColour (TextEditor::textColourId, Colours::black);
    lblText17->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lblText18 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText18->setFont (Font (18.0000f, Font::plain));
    lblText18->setJustificationType (Justification::centredLeft);
    lblText18->setEditable (false, false, false);
    lblText18->setColour (TextEditor::textColourId, Colours::black);
    lblText18->setColour (TextEditor::backgroundColourId, Colour (0x0));
    lblText18->setMinimumHorizontalScale(1.0f);

    addAndMakeVisible (lblText19 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText19->setFont (Font (19.0000f, Font::plain));
    lblText19->setJustificationType (Justification::centredLeft);
    lblText19->setEditable (false, false, false);
    lblText19->setColour (TextEditor::textColourId, Colours::black);
    lblText19->setColour (TextEditor::backgroundColourId, Colour (0x0));
    lblText19->setMinimumHorizontalScale(1.0f);

    addAndMakeVisible (lblText20 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText20->setFont (Font (20.0000f, Font::plain));
    lblText20->setJustificationType (Justification::centredLeft);
    lblText20->setEditable (false, false, false);
    lblText20->setColour (TextEditor::textColourId, Colours::black);
    lblText20->setColour (TextEditor::backgroundColourId, Colour (0x0));
    lblText20->setMinimumHorizontalScale(1.0f);

    addAndMakeVisible (lblText21 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText21->setFont (Font (21.0000f, Font::plain));
    lblText21->setJustificationType (Justification::centredLeft);
    lblText21->setEditable (false, false, false);
    lblText21->setColour (TextEditor::textColourId, Colours::black);
    lblText21->setColour (TextEditor::backgroundColourId, Colour (0x0));
    lblText21->setMinimumHorizontalScale(1.0f);

    addAndMakeVisible (lblText22 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText22->setFont (Font (22.0000f, Font::plain));
    lblText22->setJustificationType (Justification::centredLeft);
    lblText22->setEditable (false, false, false);
    lblText22->setColour (TextEditor::textColourId, Colours::black);
    lblText22->setColour (TextEditor::backgroundColourId, Colour (0x0));
    lblText22->setMinimumHorizontalScale(1.0f);

    addAndMakeVisible (lblText23 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText23->setFont (Font (23.0000f, Font::plain));
    lblText23->setJustificationType (Justification::centredLeft);
    lblText23->setEditable (false, false, false);
    lblText23->setColour (TextEditor::textColourId, Colours::black);
    lblText23->setColour (TextEditor::backgroundColourId, Colour (0x0));
    lblText23->setMinimumHorizontalScale(1.0f);

    addAndMakeVisible (lblText24 = new Label (L"new label",
                                              L"The quick brown fox jumps over the lazy dog 0123456789"));
    lblText24->setFont (Font (24.0000f, Font::plain));
    lblText24->setJustificationType (Justification::centredLeft);
    lblText24->setEditable (false, false, false);
    lblText24->setColour (TextEditor::textColourId, Colours::black);
    lblText24->setColour (TextEditor::backgroundColourId, Colour (0x0));
    lblText24->setMinimumHorizontalScale(1.0f);

    addAndMakeVisible (lbl24 = new Label (L"new label",
                                          L"24"));
    lbl24->setFont (Font (24.0000f, Font::plain));
    lbl24->setJustificationType (Justification::centredLeft);
    lbl24->setEditable (false, false, false);
    lbl24->setColour (TextEditor::textColourId, Colours::black);
    lbl24->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl23 = new Label (L"new label",
                                          L"23"));
    lbl23->setFont (Font (23.0000f, Font::plain));
    lbl23->setJustificationType (Justification::centredLeft);
    lbl23->setEditable (false, false, false);
    lbl23->setColour (TextEditor::textColourId, Colours::black);
    lbl23->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl22 = new Label (L"new label",
                                          L"22"));
    lbl22->setFont (Font (22.0000f, Font::plain));
    lbl22->setJustificationType (Justification::centredLeft);
    lbl22->setEditable (false, false, false);
    lbl22->setColour (TextEditor::textColourId, Colours::black);
    lbl22->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl21 = new Label (L"new label",
                                          L"21"));
    lbl21->setFont (Font (21.0000f, Font::plain));
    lbl21->setJustificationType (Justification::centredLeft);
    lbl21->setEditable (false, false, false);
    lbl21->setColour (TextEditor::textColourId, Colours::black);
    lbl21->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl20 = new Label (L"new label",
                                          L"20"));
    lbl20->setFont (Font (20.0000f, Font::plain));
    lbl20->setJustificationType (Justification::centredLeft);
    lbl20->setEditable (false, false, false);
    lbl20->setColour (TextEditor::textColourId, Colours::black);
    lbl20->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl19 = new Label (L"lbl19",
                                          L"19"));
    lbl19->setFont (Font (19.0000f, Font::plain));
    lbl19->setJustificationType (Justification::centredLeft);
    lbl19->setEditable (false, false, false);
    lbl19->setColour (TextEditor::textColourId, Colours::black);
    lbl19->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl18 = new Label (L"lbl18",
                                          L"18"));
    lbl18->setFont (Font (18.0000f, Font::plain));
    lbl18->setJustificationType (Justification::centredLeft);
    lbl18->setEditable (false, false, false);
    lbl18->setColour (TextEditor::textColourId, Colours::black);
    lbl18->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl17 = new Label (L"new label",
                                          L"17"));
    lbl17->setFont (Font (17.0000f, Font::plain));
    lbl17->setJustificationType (Justification::centredLeft);
    lbl17->setEditable (false, false, false);
    lbl17->setColour (TextEditor::textColourId, Colours::black);
    lbl17->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl16 = new Label (L"new label",
                                          L"16"));
    lbl16->setFont (Font (16.0000f, Font::plain));
    lbl16->setJustificationType (Justification::centredLeft);
    lbl16->setEditable (false, false, false);
    lbl16->setColour (TextEditor::textColourId, Colours::black);
    lbl16->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl15 = new Label (L"new label",
                                          L"15"));
    lbl15->setFont (Font (15.0000f, Font::plain));
    lbl15->setJustificationType (Justification::centredLeft);
    lbl15->setEditable (false, false, false);
    lbl15->setColour (TextEditor::textColourId, Colours::black);
    lbl15->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl14 = new Label (L"new label",
                                          L"14"));
    lbl14->setFont (Font (14.0000f, Font::plain));
    lbl14->setJustificationType (Justification::centredLeft);
    lbl14->setEditable (false, false, false);
    lbl14->setColour (TextEditor::textColourId, Colours::black);
    lbl14->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl13 = new Label (L"new label",
                                          L"13"));
    lbl13->setFont (Font (13.0000f, Font::plain));
    lbl13->setJustificationType (Justification::centredLeft);
    lbl13->setEditable (false, false, false);
    lbl13->setColour (TextEditor::textColourId, Colours::black);
    lbl13->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl12 = new Label (L"new label",
                                          L"12\n"));
    lbl12->setFont (Font (12.0000f, Font::plain));
    lbl12->setJustificationType (Justification::centredLeft);
    lbl12->setEditable (false, false, false);
    lbl12->setColour (TextEditor::textColourId, Colours::black);
    lbl12->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl11 = new Label (L"new label",
                                          L"11"));
    lbl11->setFont (Font (11.0000f, Font::plain));
    lbl11->setJustificationType (Justification::centredLeft);
    lbl11->setEditable (false, false, false);
    lbl11->setColour (TextEditor::textColourId, Colours::black);
    lbl11->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl10 = new Label (L"new label",
                                          L"10"));
    lbl10->setFont (Font (10.0000f, Font::plain));
    lbl10->setJustificationType (Justification::centredLeft);
    lbl10->setEditable (false, false, false);
    lbl10->setColour (TextEditor::textColourId, Colours::black);
    lbl10->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (lbl9 = new Label (L"new label",
                                         L"9"));
    lbl9->setFont (Font (9.0000f, Font::plain));
    lbl9->setJustificationType (Justification::centredLeft);
    lbl9->setEditable (false, false, false);
    lbl9->setColour (TextEditor::textColourId, Colours::black);
    lbl9->setColour (TextEditor::backgroundColourId, Colour (0x0));

    addAndMakeVisible (cmdLang1 = new TextButton (L"new button"));
    cmdLang1->setButtonText (L"English");
    cmdLang1->addListener (this);

    addAndMakeVisible (cmdLang2 = new TextButton (L"new button"));
    cmdLang2->setButtonText (L"Chinese");
    cmdLang2->addListener (this);

    addAndMakeVisible (cmdLang3 = new TextButton (L"new button"));
    cmdLang3->setButtonText (L"Empty");
    cmdLang3->addListener (this);

    addAndMakeVisible (cmdLang4 = new TextButton (L"new button"));
    cmdLang4->setButtonText (L"Empty");
    cmdLang4->addListener (this);

    addAndMakeVisible (cmdLang5 = new TextButton (L"new button"));
    cmdLang5->setButtonText (L"Empty");
    cmdLang5->addListener (this);

    cachedImage_jucelogo96_png = ImageCache::getFromMemory (jucelogo96_png, jucelogo96_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    addTextLabelsToArray();
    addSizeLabelsToArray();
    asDirect.setText("Fast Path Text Layout");
    Font f(20.0f);
    asDirect.setFont(f);
    asTextLayout.setText("Standard Text Layout");
    asTextLayout.setFont(f);
    textLayout.createLayout(asTextLayout, 500.0f);
    //[/Constructor]
}

WindowComponent::~WindowComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    deleteAndZero (cmdRSoftware);
    deleteAndZero (cmdROpengl);
    deleteAndZero (cmdRDirect2d);
    deleteAndZero (lblCurrent);
    deleteAndZero (lblRenderer);
    deleteAndZero (lblSize70);
    deleteAndZero (lblSize75);
    deleteAndZero (lblSize80);
    deleteAndZero (lblSize85);
    deleteAndZero (lblSize90);
    deleteAndZero (lblSize95);
    deleteAndZero (lblSize100);
    deleteAndZero (lblSize105);
    deleteAndZero (lblSize110);
    deleteAndZero (lblSize115);
    deleteAndZero (lblSize120);
    deleteAndZero (lblSize125);
    deleteAndZero (lblSize130);
    deleteAndZero (lblSize135);
    deleteAndZero (lblText9);
    deleteAndZero (lblText10);
    deleteAndZero (lblText11);
    deleteAndZero (lblText12);
    deleteAndZero (lblText13);
    deleteAndZero (lblText14);
    deleteAndZero (lblText15);
    deleteAndZero (lblText16);
    deleteAndZero (lblText17);
    deleteAndZero (lblText18);
    deleteAndZero (lblText19);
    deleteAndZero (lblText20);
    deleteAndZero (lblText21);
    deleteAndZero (lblText22);
    deleteAndZero (lblText23);
    deleteAndZero (lblText24);
    deleteAndZero (lbl24);
    deleteAndZero (lbl23);
    deleteAndZero (lbl22);
    deleteAndZero (lbl21);
    deleteAndZero (lbl20);
    deleteAndZero (lbl19);
    deleteAndZero (lbl18);
    deleteAndZero (lbl17);
    deleteAndZero (lbl16);
    deleteAndZero (lbl15);
    deleteAndZero (lbl14);
    deleteAndZero (lbl13);
    deleteAndZero (lbl12);
    deleteAndZero (lbl11);
    deleteAndZero (lbl10);
    deleteAndZero (lbl9);
    deleteAndZero (cmdLang1);
    deleteAndZero (cmdLang2);
    deleteAndZero (cmdLang3);
    deleteAndZero (cmdLang4);
    deleteAndZero (cmdLang5);


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void WindowComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colour (0xff4e2aa5));
    g.fillRect (12, 412, 100, 100);

    g.setColour (Colour (0xff2a49a5));
    g.fillRoundedRectangle (132.0f, 412.0f, 100.0f, 100.0f, 10.0000f);

    g.setColour (Colour (0xff87a52a));
    g.fillEllipse (252.0f, 412.0f, 100.0f, 100.0f);

    g.setColour (Colours::black);
    g.drawImage (cachedImage_jucelogo96_png,
                 508, 412, 100, 100,
                 0, 0, cachedImage_jucelogo96_png.getWidth(), cachedImage_jucelogo96_png.getHeight());

    g.setColour (Colour (0xff8d2aa5));
    g.fillPath (internalPath1);

    g.setColour (Colour (0xff2aa59d));
    g.fillPath (internalPath2);

    g.setColour (Colour (0xffa54e2a));
    g.fillPath (internalPath3);

    g.setColour (Colour (0xff2a93a5));
    g.fillPath (internalPath4);

    g.setColour (Colour (0x63a5362a));
    g.fillPath (internalPath5);

    g.setColour (Colour (0x8a2aa538));
    g.fillPath (internalPath6);

    //[UserPaint] Add your own custom painting code here..
    Rectangle <float> rectDirect(8, 540, 500, 30);
    asDirect.draw(g, rectDirect);
    Rectangle <float> rectTextLayout(8, 570, 500, 30);
    textLayout.draw(g, rectTextLayout);
    //[/UserPaint]
}

void WindowComponent::resized()
{
    cmdRSoftware->setBounds (8, 8, 150, 24);
    cmdROpengl->setBounds (168, 8, 150, 24);
    cmdRDirect2d->setBounds (328, 8, 150, 24);
    lblCurrent->setBounds (488, 8, 128, 24);
    lblRenderer->setBounds (616, 8, 128, 24);
    lblSize70->setBounds (704, 40, 150, 16);
    lblSize75->setBounds (704, 64, 150, 16);
    lblSize80->setBounds (704, 88, 150, 16);
    lblSize85->setBounds (704, 112, 150, 16);
    lblSize90->setBounds (704, 136, 150, 16);
    lblSize95->setBounds (704, 160, 150, 16);
    lblSize100->setBounds (704, 184, 150, 16);
    lblSize105->setBounds (704, 208, 150, 16);
    lblSize110->setBounds (704, 232, 150, 16);
    lblSize115->setBounds (704, 256, 150, 16);
    lblSize120->setBounds (704, 280, 150, 16);
    lblSize125->setBounds (704, 304, 150, 16);
    lblSize130->setBounds (704, 328, 150, 16);
    lblSize135->setBounds (704, 352, 150, 16);
    lblText9->setBounds (64, 40, 624, 16);
    lblText10->setBounds (64, 56, 624, 16);
    lblText11->setBounds (64, 72, 624, 16);
    lblText12->setBounds (64, 88, 624, 16);
    lblText13->setBounds (64, 104, 624, 16);
    lblText14->setBounds (64, 120, 624, 16);
    lblText15->setBounds (64, 136, 624, 16);
    lblText16->setBounds (64, 152, 624, 16);
    lblText17->setBounds (64, 168, 624, 24);
    lblText18->setBounds (64, 192, 624, 24);
    lblText19->setBounds (64, 216, 624, 24);
    lblText20->setBounds (64, 240, 624, 24);
    lblText21->setBounds (64, 264, 624, 24);
    lblText22->setBounds (64, 288, 624, 24);
    lblText23->setBounds (64, 312, 624, 24);
    lblText24->setBounds (64, 336, 624, 24);
    lbl24->setBounds (8, 336, 40, 24);
    lbl23->setBounds (8, 312, 40, 24);
    lbl22->setBounds (8, 288, 40, 24);
    lbl21->setBounds (8, 264, 32, 24);
    lbl20->setBounds (8, 240, 32, 24);
    lbl19->setBounds (8, 216, 32, 24);
    lbl18->setBounds (8, 192, 32, 24);
    lbl17->setBounds (8, 168, 32, 24);
    lbl16->setBounds (8, 152, 32, 16);
    lbl15->setBounds (8, 136, 32, 16);
    lbl14->setBounds (8, 120, 32, 16);
    lbl13->setBounds (8, 104, 24, 16);
    lbl12->setBounds (8, 88, 24, 16);
    lbl11->setBounds (8, 72, 24, 16);
    lbl10->setBounds (8, 56, 24, 16);
    lbl9->setBounds (8, 40, 16, 16);
    cmdLang1->setBounds (8, 376, 150, 24);
    cmdLang2->setBounds (168, 376, 150, 24);
    cmdLang3->setBounds (328, 376, 150, 24);
    cmdLang4->setBounds (488, 376, 150, 24);
    cmdLang5->setBounds (648, 376, 150, 24);
    internalPath1.clear();
    internalPath1.startNewSubPath (674.0f, 416.0f);
    internalPath1.quadraticTo (712.0f, 423.0f, 728.0f, 456.0f);
    internalPath1.quadraticTo (672.0f, 443.0f, 620.0f, 456.0f);
    internalPath1.closeSubPath();

    internalPath2.clear();
    internalPath2.startNewSubPath (794.0f, 416.0f);
    internalPath2.cubicTo (832.0f, 432.0f, 792.0f, 480.0f, 848.0f, 510.0f);
    internalPath2.quadraticTo (768.0f, 488.0f, 740.0f, 510.0f);
    internalPath2.closeSubPath();

    internalPath3.clear();
    internalPath3.startNewSubPath (674.0f, 468.0f);
    internalPath3.cubicTo (720.0f, 472.0f, 680.0f, 488.0f, 728.0f, 508.0f);
    internalPath3.cubicTo (664.0f, 504.0f, 672.0f, 480.0f, 620.0f, 508.0f);
    internalPath3.closeSubPath();

    internalPath4.clear();
    internalPath4.startNewSubPath (426.0f, 444.0f);
    internalPath4.lineTo (456.0f, 494.0f);
    internalPath4.lineTo (396.0f, 494.0f);
    internalPath4.closeSubPath();

    internalPath5.clear();
    internalPath5.startNewSubPath (450.0f, 428.0f);
    internalPath5.lineTo (480.0f, 478.0f);
    internalPath5.lineTo (420.0f, 478.0f);
    internalPath5.closeSubPath();

    internalPath6.clear();
    internalPath6.startNewSubPath (402.0f, 428.0f);
    internalPath6.lineTo (432.0f, 478.0f);
    internalPath6.lineTo (372.0f, 478.0f);
    internalPath6.closeSubPath();

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void WindowComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == cmdRSoftware)
    {
        //[UserButtonCode_cmdRSoftware] -- add your button handler code here..
        changeRenderingEngine("Software Renderer");
        //[/UserButtonCode_cmdRSoftware]
    }
    else if (buttonThatWasClicked == cmdROpengl)
    {
        //[UserButtonCode_cmdROpengl] -- add your button handler code here..
        changeRenderingEngine("OpenGL Renderer");
        //[/UserButtonCode_cmdROpengl]
    }
    else if (buttonThatWasClicked == cmdRDirect2d)
    {
        //[UserButtonCode_cmdRDirect2d] -- add your button handler code here..
        changeRenderingEngine("Direct2D Renderer");
        //[/UserButtonCode_cmdRDirect2d]
    }
    else if (buttonThatWasClicked == cmdLang1)
    {
        //[UserButtonCode_cmdLang1] -- add your button handler code here..
        // English
        Font f;
        String text("The quick brown fox jumps over the lazy dog 0123456789");
        String size("Size");
        changeLabels(f, text, size);
        //[/UserButtonCode_cmdLang1]
    }
    else if (buttonThatWasClicked == cmdLang2)
    {
        //[UserButtonCode_cmdLang2] -- add your button handler code here..
        // Chinese
        Font f("MS Gothic", "Regular", 7.0f);
        String text(CharPointer_UTF8 ("\xe6\x9c\xac\xe9\xa0\x81\xe9\x9d\xa2\xe6\x98\xaf\xe9\x87\x9d\xe5\xb0\x8d\xe4\xb8\x80\xe8\x88\xac\xe5\x8f\x83\xe8\xa8\xaa\xe8\x80\x85\xe7\x9a\x84\xe3\x80\x8c\xe7\xb6\xad\xe5\x9f\xba\xe7\x99\xbe\xe7\xa7\x91\xe3\x80\x8d\xe8\xa8\x88\xe7\x95\xab\xe4\xbb\x8b\xe7\xb4\xb9\xef\xbc\x8c\xe5\x8f\xa6\xe5\x8f\xaf\xe5\x8f\x83\xe8\xa6\x8b\xe9\xa0\x81\xe9\x9d\xa2\xe3\x80\x8c\xe7\xb6\xad\xe5\x9f\xba\xe7\x99\xbe\xe7\xa7\x91\xe3\x80\x8d"));
        String size(CharPointer_UTF8 ("\xe5\xa4\xa7\xe5\xb0\x8f"));
        changeLabels(f, text, size);
        //[/UserButtonCode_cmdLang2]
    }
    else if (buttonThatWasClicked == cmdLang3)
    {
        //[UserButtonCode_cmdLang3] -- add your button handler code here..
        //[/UserButtonCode_cmdLang3]
    }
    else if (buttonThatWasClicked == cmdLang4)
    {
        //[UserButtonCode_cmdLang4] -- add your button handler code here..
        //[/UserButtonCode_cmdLang4]
    }
    else if (buttonThatWasClicked == cmdLang5)
    {
        //[UserButtonCode_cmdLang5] -- add your button handler code here..
        //[/UserButtonCode_cmdLang5]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void WindowComponent::changeRenderingEngine(const String& newEngine)
{
    if ((currentEngine == "OpenGL Renderer") && (newEngine != currentEngine))
    {
        openGLContext.detach();
    }
    if ((newEngine == "OpenGL Renderer") && (newEngine != currentEngine))
    {
        openGLContext.attachTo (*getTopLevelComponent());
    }
    if ((newEngine == "Software Renderer") && (newEngine != currentEngine))
    {
        getPeer()->setCurrentRenderingEngine (0);
    }
    if ((newEngine == "Direct2D Renderer") && (newEngine != currentEngine))
    {
        getPeer()->setCurrentRenderingEngine (1);
    }
    currentEngine = newEngine;
    lblRenderer->setText(currentEngine, false);
}

void WindowComponent::changeLabels(Font& f, const String& text, const String& size)
{
    // Text Labels
    float fontSize = 9.0f;
    for (int i = 0; i <  textLabels.size(); ++i)
    {
        f.setSizeAndStyle(fontSize, f.getTypefaceStyle(), f.getHorizontalScale(), 0.0f);
        textLabels[i]->setFont(f);
        textLabels[i]->setText(text, false);
        fontSize += 1.0f;
    }
    // Size Labels
    fontSize = 7.0f;
    for (int i = 0; i < sizeLabels.size(); ++i)
    {
        f.setSizeAndStyle(fontSize, f.getTypefaceStyle(), f.getHorizontalScale(), 0.0f);
        sizeLabels[i]->setFont(f);
        sizeLabels[i]->setText(size + " " + String(fontSize), false);
        if (i % 2 == 0) sizeLabels[i]->setText(sizeLabels[i]->getText() + ".0", false);
        fontSize += 0.5f;
    }
}

void WindowComponent::addTextLabelsToArray()
{
    textLabels.add(lblText9);
    textLabels.add(lblText10);
    textLabels.add(lblText11);
    textLabels.add(lblText12);
    textLabels.add(lblText13);
    textLabels.add(lblText14);
    textLabels.add(lblText15);
    textLabels.add(lblText16);
    textLabels.add(lblText17);
    textLabels.add(lblText18);
    textLabels.add(lblText19);
    textLabels.add(lblText20);
    textLabels.add(lblText21);
    textLabels.add(lblText22);
    textLabels.add(lblText23);
    textLabels.add(lblText24);
}

void WindowComponent::addSizeLabelsToArray()
{
    sizeLabels.add(lblSize70);
    sizeLabels.add(lblSize75);
    sizeLabels.add(lblSize80);
    sizeLabels.add(lblSize85);
    sizeLabels.add(lblSize90);
    sizeLabels.add(lblSize95);
    sizeLabels.add(lblSize100);
    sizeLabels.add(lblSize105);
    sizeLabels.add(lblSize110);
    sizeLabels.add(lblSize115);
    sizeLabels.add(lblSize120);
    sizeLabels.add(lblSize125);
    sizeLabels.add(lblSize130);
    sizeLabels.add(lblSize135);
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Jucer information section --

    This is where the Jucer puts all of its metadata, so don't change anything in here!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="WindowComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330000013"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff">
    <RECT pos="12 412 100 100" fill="solid: ff4e2aa5" hasStroke="0"/>
    <ROUNDRECT pos="132 412 100 100" cornerSize="10" fill="solid: ff2a49a5"
               hasStroke="0"/>
    <ELLIPSE pos="252 412 100 100" fill="solid: ff87a52a" hasStroke="0"/>
    <IMAGE pos="508 412 100 100" resource="jucelogo96_png" opacity="1" mode="0"/>
    <PATH pos="0 0 100 100" fill="solid: ff8d2aa5" hasStroke="0" nonZeroWinding="1">s 674 416 q 712 422.81 728 456 q 672 443.23 620 456 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff2aa59d" hasStroke="0" nonZeroWinding="1">s 794 416 c 832 432 792 480  848 510 q 768 488 740 510 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ffa54e2a" hasStroke="0" nonZeroWinding="1">s 674 468 c 720 472 680 488  728 508 c 664 504 672 480  620 508 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff2a93a5" hasStroke="0" nonZeroWinding="1">s 426 444 l 456 494 l 396 494 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: 63a5362a" hasStroke="0" nonZeroWinding="1">s 450 428 l 480 478 l 420 478 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: 8a2aa538" hasStroke="0" nonZeroWinding="1">s 402 428 l 432 478 l 372 478 x</PATH>
  </BACKGROUND>
  <TEXTBUTTON name="new button" id="2db358f3a6b7ee8b" memberName="cmdRSoftware"
              virtualName="" explicitFocusOrder="0" pos="8 8 150 24" buttonText="Software Renderer"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d24a2750fd84f9cd" memberName="cmdROpengl"
              virtualName="" explicitFocusOrder="0" pos="168 8 150 24" buttonText="OpenGL Renderer"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="58b3f584e4b8e856" memberName="cmdRDirect2d"
              virtualName="" explicitFocusOrder="0" pos="328 8 150 24" buttonText="Direct2D Renderer"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="8faf131377a33d18" memberName="lblCurrent"
         virtualName="" explicitFocusOrder="0" pos="488 8 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Current Renderer:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="51cac6013b3f78ee" memberName="lblRenderer"
         virtualName="" explicitFocusOrder="0" pos="616 8 128 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Unknown" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="bcc65c7444a33a42" memberName="lblSize70"
         virtualName="" explicitFocusOrder="0" pos="704 40 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 7.0&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="7" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="cda7388277c26b52" memberName="lblSize75"
         virtualName="" explicitFocusOrder="0" pos="704 64 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 7.5&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="7.5" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="21f8fda6db5f0add" memberName="lblSize80"
         virtualName="" explicitFocusOrder="0" pos="704 88 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 8.0&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="8" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="537d8ad3a6696762" memberName="lblSize85"
         virtualName="" explicitFocusOrder="0" pos="704 112 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 8.5&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="8.5" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6f09d9fe652c2ea" memberName="lblSize90"
         virtualName="" explicitFocusOrder="0" pos="704 136 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 9.0&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="9" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c95eebb670d9e4e4" memberName="lblSize95"
         virtualName="" explicitFocusOrder="0" pos="704 160 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 9.5&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="9.5" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="d405450e62b76247" memberName="lblSize100"
         virtualName="" explicitFocusOrder="0" pos="704 184 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 10.0&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="10" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="e8c3255e9a03c3fd" memberName="lblSize105"
         virtualName="" explicitFocusOrder="0" pos="704 208 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 10.5&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="10.5" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="e9ad17f590b875bc" memberName="lblSize110"
         virtualName="" explicitFocusOrder="0" pos="704 232 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 11.0&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="11" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="ce7d7ef8c14bac3f" memberName="lblSize115"
         virtualName="" explicitFocusOrder="0" pos="704 256 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 11.5&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="11.5" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="6ef4041691ceb490" memberName="lblSize120"
         virtualName="" explicitFocusOrder="0" pos="704 280 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 12.0&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="12" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="892d714d6ce455d9" memberName="lblSize125"
         virtualName="" explicitFocusOrder="0" pos="704 304 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 12.5&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="12.5" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="c57ba55368d4cccc" memberName="lblSize130"
         virtualName="" explicitFocusOrder="0" pos="704 328 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 13.0&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="13" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="8aa5dfc9c354f5c4" memberName="lblSize135"
         virtualName="" explicitFocusOrder="0" pos="704 352 150 16" bkgCol="ff000064"
         textCol="fff0ffff" edTextCol="ff000000" edBkgCol="0" labelText="Size 13.5&#10;"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="13.5" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="309c20e6f993eb3a" memberName="lblText9"
         virtualName="" explicitFocusOrder="0" pos="64 40 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="9" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="bd86331bf2458219" memberName="lblText10"
         virtualName="" explicitFocusOrder="0" pos="64 56 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="10" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8b82ab267ae33745" memberName="lblText11"
         virtualName="" explicitFocusOrder="0" pos="64 72 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="11" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f8fc7f26f9dd8e18" memberName="lblText12"
         virtualName="" explicitFocusOrder="0" pos="64 88 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="12" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c8983c212596681d" memberName="lblText13"
         virtualName="" explicitFocusOrder="0" pos="64 104 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="13" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3974358051854aa1" memberName="lblText14"
         virtualName="" explicitFocusOrder="0" pos="64 120 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fb32c0037879b097" memberName="lblText15"
         virtualName="" explicitFocusOrder="0" pos="64 136 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="bc78a7f4969616bc" memberName="lblText16"
         virtualName="" explicitFocusOrder="0" pos="64 152 624 16" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c20569f9ead25fb" memberName="lblText17"
         virtualName="" explicitFocusOrder="0" pos="64 168 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="17" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a4755b001d5ca012" memberName="lblText18"
         virtualName="" explicitFocusOrder="0" pos="64 192 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="18" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="acd349bef3d7f274" memberName="lblText19"
         virtualName="" explicitFocusOrder="0" pos="64 216 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="19" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f43e2858270e9371" memberName="lblText20"
         virtualName="" explicitFocusOrder="0" pos="64 240 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="20" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fe39d79d9bf88d93" memberName="lblText21"
         virtualName="" explicitFocusOrder="0" pos="64 264 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="21" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="58931617195dd4b" memberName="lblText22"
         virtualName="" explicitFocusOrder="0" pos="64 288 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="22" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ddd4cd6d12d384cd" memberName="lblText23"
         virtualName="" explicitFocusOrder="0" pos="64 312 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="23" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="18c4a1b7d0537a37" memberName="lblText24"
         virtualName="" explicitFocusOrder="0" pos="64 336 624 24" edTextCol="ff000000"
         edBkgCol="0" labelText="The quick brown fox jumps over the lazy dog 0123456789"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="24" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b416f1d2f242d3f8" memberName="lbl24" virtualName=""
         explicitFocusOrder="0" pos="8 336 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="24" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="24"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3ff241a77f3bd76f" memberName="lbl23" virtualName=""
         explicitFocusOrder="0" pos="8 312 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="23" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="23"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="36573f6514e7cdd2" memberName="lbl22" virtualName=""
         explicitFocusOrder="0" pos="8 288 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="22" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="22"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b172d8b5ebeec351" memberName="lbl21" virtualName=""
         explicitFocusOrder="0" pos="8 264 32 24" edTextCol="ff000000"
         edBkgCol="0" labelText="21" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="21"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cddfef32a901947a" memberName="lbl20" virtualName=""
         explicitFocusOrder="0" pos="8 240 32 24" edTextCol="ff000000"
         edBkgCol="0" labelText="20" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="20"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lbl19" id="82eb6018c2aceddf" memberName="lbl19" virtualName=""
         explicitFocusOrder="0" pos="8 216 32 24" edTextCol="ff000000"
         edBkgCol="0" labelText="19" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="19"
         bold="0" italic="0" justification="33"/>
  <LABEL name="lbl18" id="3ce4533abd6a21f5" memberName="lbl18" virtualName=""
         explicitFocusOrder="0" pos="8 192 32 24" edTextCol="ff000000"
         edBkgCol="0" labelText="18" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e7ae0539274cf93e" memberName="lbl17" virtualName=""
         explicitFocusOrder="0" pos="8 168 32 24" edTextCol="ff000000"
         edBkgCol="0" labelText="17" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="17"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a96780f250fbe0aa" memberName="lbl16" virtualName=""
         explicitFocusOrder="0" pos="8 152 32 16" edTextCol="ff000000"
         edBkgCol="0" labelText="16" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="16"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5150fc3824921a3a" memberName="lbl15" virtualName=""
         explicitFocusOrder="0" pos="8 136 32 16" edTextCol="ff000000"
         edBkgCol="0" labelText="15" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="6d5dcbc3f2e1d3e7" memberName="lbl14" virtualName=""
         explicitFocusOrder="0" pos="8 120 32 16" edTextCol="ff000000"
         edBkgCol="0" labelText="14" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="14"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3c5d2267868648c1" memberName="lbl13" virtualName=""
         explicitFocusOrder="0" pos="8 104 24 16" edTextCol="ff000000"
         edBkgCol="0" labelText="13" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="13"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ea930f889094505a" memberName="lbl12" virtualName=""
         explicitFocusOrder="0" pos="8 88 24 16" edTextCol="ff000000"
         edBkgCol="0" labelText="12&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="12"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="63e70cd86ba0064" memberName="lbl11" virtualName=""
         explicitFocusOrder="0" pos="8 72 24 16" edTextCol="ff000000"
         edBkgCol="0" labelText="11" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="11"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="281fcb1324844498" memberName="lbl10" virtualName=""
         explicitFocusOrder="0" pos="8 56 24 16" edTextCol="ff000000"
         edBkgCol="0" labelText="10" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="10"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e4e03ea4eb8b90d9" memberName="lbl9" virtualName=""
         explicitFocusOrder="0" pos="8 40 16 16" edTextCol="ff000000"
         edBkgCol="0" labelText="9" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="9"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="44f4eb822f4ae031" memberName="cmdLang1"
              virtualName="" explicitFocusOrder="0" pos="8 376 150 24" buttonText="English"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="947bcb9402b772c8" memberName="cmdLang2"
              virtualName="" explicitFocusOrder="0" pos="168 376 150 24" buttonText="Chinese"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="fe273946656bf8ba" memberName="cmdLang3"
              virtualName="" explicitFocusOrder="0" pos="328 376 150 24" buttonText="Empty"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b7b4c6a739273ce2" memberName="cmdLang4"
              virtualName="" explicitFocusOrder="0" pos="488 376 150 24" buttonText="Empty"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a08ba29e78698d3d" memberName="cmdLang5"
              virtualName="" explicitFocusOrder="0" pos="648 376 150 24" buttonText="Empty"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: jucelogo96_png, 13488, "../jucelogo96.png"
static const unsigned char resource_WindowComponent_jucelogo96_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,96,0,0,0,96,8,6,0,0,0,226,152,119,56,0,0,2,238,105,67,67,80,73,67,67,32,80,
114,111,102,105,108,101,0,0,120,1,133,84,207,107,19,65,20,254,54,110,169,208,34,8,90,107,14,178,120,144,34,73,89,171,104,69,212,54,253,17,98,107,12,219,31,182,69,144,100,51,73,214,110,54,235,238,38,181,
165,136,228,226,209,42,222,69,237,161,7,255,128,30,122,240,100,47,74,133,90,69,40,222,171,40,98,161,23,45,241,205,110,76,182,165,234,192,206,126,243,222,55,239,125,111,118,223,0,13,114,210,52,245,128,
4,228,13,199,82,162,17,105,108,124,66,106,252,136,0,142,162,9,65,52,37,85,219,236,78,36,6,65,131,115,249,123,231,216,122,15,129,91,86,195,123,251,119,178,119,173,154,210,182,154,7,132,253,64,224,71,154,
217,42,176,239,23,113,10,89,18,2,136,60,223,161,41,199,116,8,223,227,216,242,236,143,57,78,121,120,193,181,15,43,61,196,89,34,124,64,53,45,206,127,77,184,83,205,37,211,64,131,72,56,148,245,113,82,62,156,
215,139,148,215,29,7,105,110,102,198,200,16,189,79,144,166,187,204,238,171,98,161,156,78,246,14,144,189,157,244,126,78,179,222,62,194,33,194,11,25,173,63,70,184,141,158,245,140,213,63,226,97,225,164,230,
196,134,61,28,24,53,244,248,96,21,183,26,169,248,53,194,20,95,16,77,39,162,84,113,217,46,13,241,152,174,253,86,242,74,130,112,144,56,202,100,97,128,115,90,72,79,215,76,110,248,186,135,5,125,38,215,19,
175,226,119,86,81,225,121,143,19,103,222,212,221,239,69,218,2,175,48,14,29,12,26,12,154,13,72,80,16,69,4,97,152,176,80,64,134,60,26,49,52,178,114,63,35,171,6,27,147,123,50,117,36,106,187,116,98,68,177,
65,123,54,220,61,183,81,164,221,60,254,40,34,113,148,67,181,8,146,252,65,254,42,175,201,79,229,121,249,203,92,176,216,86,247,148,173,155,154,186,242,224,59,197,229,153,185,26,30,215,211,200,227,115,77,
94,124,149,212,118,147,87,71,150,172,121,122,188,154,236,26,63,236,87,151,49,230,130,53,143,196,115,176,251,241,45,95,149,204,151,41,140,20,197,227,85,243,234,75,132,117,90,49,55,223,159,108,127,59,61,
226,46,207,46,181,214,115,173,137,139,55,86,155,151,103,253,106,72,251,238,170,188,147,230,85,249,79,94,245,241,252,103,205,196,99,226,41,49,38,118,138,231,33,137,151,197,46,241,146,216,75,171,11,226,
96,109,199,8,157,149,134,41,210,109,145,250,36,213,96,96,154,188,245,47,93,63,91,120,189,70,127,12,245,81,148,25,204,210,84,137,247,127,194,42,100,52,157,185,14,111,250,143,219,199,252,23,228,247,138,
231,159,40,2,47,108,224,200,153,186,109,83,113,239,16,161,101,165,110,115,174,2,23,191,209,125,240,182,110,107,163,126,56,252,4,88,60,171,22,173,82,53,159,32,188,1,28,118,135,122,30,232,41,152,211,150,
150,205,57,82,135,44,159,147,186,233,202,98,82,204,80,219,67,82,82,215,37,215,101,75,22,179,153,85,98,233,118,216,153,211,29,110,28,161,57,66,247,196,167,74,101,147,250,175,241,17,176,253,176,82,249,249,
172,82,217,126,78,26,214,129,151,250,111,192,188,253,69,192,120,139,137,0,0,0,9,112,72,89,115,0,0,23,18,0,0,23,18,1,103,159,210,82,0,0,32,0,73,68,65,84,120,1,237,125,7,116,100,87,153,230,95,165,202,37,
149,74,42,229,208,10,157,115,114,182,193,198,24,76,50,152,96,239,192,236,206,49,99,198,59,44,107,24,102,102,57,28,14,140,109,216,133,129,101,128,177,25,194,44,147,60,103,6,88,219,224,133,99,146,177,49,
206,118,119,219,157,165,110,75,234,150,212,173,44,149,164,146,42,135,253,190,255,214,147,170,21,203,110,179,94,124,250,170,171,234,213,123,247,221,251,231,116,239,171,182,229,114,57,185,208,94,59,10,216,
95,187,169,47,204,76,10,92,96,192,107,44,7,23,24,112,129,1,175,49,5,94,227,233,47,104,192,5,6,188,198,20,120,141,167,119,188,202,243,219,172,241,238,186,235,174,185,99,235,220,239,251,231,29,119,220,145,
179,217,108,130,208,253,85,139,221,109,231,59,214,93,114,151,189,254,64,125,137,28,56,32,191,254,245,223,103,239,187,79,201,76,226,191,238,24,0,156,114,183,221,118,155,237,186,235,26,108,225,112,125,110,
112,112,48,3,166,100,207,71,176,94,49,3,238,187,239,230,146,227,178,181,228,142,155,238,72,18,0,72,6,9,94,138,151,15,47,106,86,9,94,175,39,38,80,234,137,107,52,255,226,119,215,157,119,222,146,59,118,108,
54,117,223,125,247,101,95,137,102,188,34,6,220,117,223,93,174,59,111,190,51,3,0,178,159,250,236,71,54,237,185,116,199,155,253,101,190,203,157,206,146,86,155,205,94,158,203,101,73,124,168,234,235,133,1,
164,53,100,201,38,201,76,38,59,18,143,38,58,207,246,13,62,249,137,219,190,240,28,46,140,94,119,221,222,146,116,83,89,226,177,127,126,140,12,34,31,138,54,81,47,139,1,148,242,187,239,190,221,117,251,237,
119,39,254,240,214,119,181,191,239,15,222,241,137,210,50,255,135,74,75,189,85,14,71,137,100,179,57,188,206,75,35,1,255,255,191,141,74,110,179,227,133,191,232,108,76,102,163,177,195,221,29,167,191,247,
201,63,253,226,79,0,245,236,187,223,125,101,226,39,63,121,138,26,82,180,54,20,205,0,18,31,234,230,190,243,206,127,78,222,125,239,103,111,108,107,107,190,39,20,42,111,136,198,226,146,76,166,178,182,156,
128,235,121,139,243,59,54,60,20,48,18,193,154,110,225,247,223,41,11,85,182,137,170,173,196,231,247,170,192,13,244,15,255,242,246,91,191,248,249,137,145,137,211,55,222,120,77,244,193,7,31,155,5,12,233,
98,52,161,40,6,144,248,148,252,143,127,252,158,212,223,253,219,231,254,104,77,75,195,63,250,124,110,91,44,26,79,217,236,37,37,14,187,211,14,211,3,152,126,167,168,235,224,84,110,135,195,4,111,217,44,173,
160,77,74,74,74,36,147,201,40,49,254,223,192,0,77,207,101,115,153,76,42,3,185,179,7,202,75,237,3,253,35,71,190,244,233,111,255,229,161,67,93,29,87,93,181,125,230,201,39,143,68,0,92,102,53,38,20,197,128,
143,223,243,113,247,61,31,191,39,249,213,239,254,197,123,214,109,110,253,49,108,189,164,82,153,148,203,233,118,130,252,176,122,231,79,120,85,32,142,163,20,212,3,75,192,231,6,231,89,18,123,120,116,80,142,
119,29,146,116,38,173,142,166,50,88,35,219,55,238,18,167,211,101,152,48,119,135,57,40,4,79,181,133,166,100,65,159,151,253,21,99,192,215,73,42,157,200,1,142,116,121,121,169,243,84,215,217,142,91,223,255,
185,219,61,34,221,13,237,237,225,158,158,30,106,194,138,76,88,53,15,184,249,230,155,75,232,225,47,187,102,87,75,83,123,237,215,92,94,187,68,33,249,110,167,199,73,98,165,179,32,194,249,54,136,53,9,11,101,
82,164,56,156,18,23,156,37,169,12,1,115,98,135,150,197,147,9,121,226,133,95,201,153,145,163,226,117,85,232,204,135,123,6,197,237,118,203,182,141,59,36,157,78,106,63,195,66,245,136,58,46,84,84,251,242,
51,157,78,211,83,2,124,107,108,189,244,242,222,48,1,71,132,0,218,50,217,180,115,34,28,78,55,181,85,111,190,243,235,31,253,139,59,63,249,237,59,27,218,43,178,61,61,146,66,151,56,94,133,50,112,206,60,171,
50,96,235,86,1,3,36,251,199,255,245,134,219,203,43,124,109,145,169,72,218,233,112,59,97,112,36,155,225,248,231,223,72,252,200,204,148,156,29,234,151,193,209,179,210,88,211,44,235,218,54,168,89,225,232,
100,2,84,94,236,14,151,132,195,99,18,158,30,146,138,210,53,184,66,166,152,104,247,204,224,41,217,216,182,81,96,23,36,99,203,228,239,1,99,97,174,102,103,166,229,240,137,23,245,220,154,134,86,169,169,170,
3,225,236,24,63,173,231,94,41,6,74,85,112,161,196,14,139,144,78,148,204,68,102,100,221,166,166,183,95,243,214,189,7,30,251,213,129,31,110,187,180,45,113,244,185,83,105,48,58,181,156,41,90,145,1,150,244,
191,237,166,43,215,250,202,92,255,33,26,139,74,86,144,12,34,18,72,103,207,159,248,180,231,118,187,93,186,122,78,202,11,29,79,201,76,44,172,228,238,236,125,30,84,127,191,172,111,223,40,137,68,66,173,18,
165,21,120,202,217,145,126,34,43,46,7,29,96,6,208,100,197,81,226,146,225,112,191,76,205,132,37,88,94,137,160,32,1,9,55,230,42,149,130,198,28,120,68,122,206,190,136,123,74,229,104,207,179,210,92,179,65,
46,217,121,133,148,149,6,84,211,56,246,43,110,121,46,96,12,91,34,153,200,150,150,123,236,151,93,187,227,189,96,192,51,46,187,143,210,207,168,136,102,66,123,46,156,103,197,98,28,165,31,55,100,174,189,126,
215,27,220,94,71,99,60,22,71,120,149,45,193,155,100,128,252,121,189,32,169,16,63,132,114,51,178,255,216,19,18,141,71,196,239,9,226,85,46,62,119,80,158,57,252,168,156,238,239,65,31,51,87,44,17,131,221,
63,38,199,187,95,16,143,171,84,77,8,57,67,172,28,37,78,73,36,99,242,252,161,167,213,63,164,210,41,156,207,226,92,92,158,63,252,140,244,13,157,144,96,105,163,120,221,101,48,91,1,121,233,204,126,57,121,
170,83,105,145,65,216,252,202,241,48,247,154,96,128,177,103,198,150,4,195,235,155,43,55,98,240,139,94,120,230,88,160,173,173,134,137,169,230,69,58,225,130,183,21,53,64,196,79,6,57,189,126,207,197,48,117,
144,184,116,214,6,145,165,243,161,13,61,223,102,211,188,33,13,231,233,6,17,210,74,8,138,46,205,10,191,63,190,255,23,82,23,90,131,239,54,153,154,157,132,132,143,170,180,211,36,241,186,213,178,32,54,204,
34,180,163,91,134,39,250,165,50,80,43,94,143,79,166,103,38,101,124,106,16,12,13,160,63,52,22,32,219,161,70,94,87,80,111,229,24,185,28,180,232,60,81,161,6,41,77,178,25,91,10,198,166,60,232,115,92,245,230,
29,219,159,124,228,240,83,174,50,47,213,122,26,125,150,12,75,151,101,0,85,234,150,91,174,33,160,126,135,195,222,70,41,33,162,118,18,95,0,52,175,20,221,172,222,133,170,142,81,128,185,3,17,149,215,237,147,
153,232,164,184,156,30,32,194,120,8,231,97,239,137,84,239,96,39,204,4,205,80,9,76,136,71,205,14,35,47,23,8,174,42,132,119,72,30,250,128,192,32,68,60,25,133,196,119,224,208,46,110,151,95,165,158,215,97,
171,84,155,116,116,140,235,247,249,48,11,48,194,53,18,112,190,105,60,70,229,68,43,60,63,223,99,169,35,29,11,227,229,50,48,137,238,18,169,170,15,54,163,95,200,81,146,27,196,39,233,204,193,44,66,224,208,
180,101,25,192,203,167,79,159,230,135,199,102,207,5,152,225,226,101,203,194,193,189,220,108,151,78,150,141,177,186,54,128,66,66,83,189,232,79,44,109,210,224,16,62,129,42,29,139,51,130,19,41,243,87,74,
176,44,36,193,64,37,142,203,196,231,245,137,203,229,6,131,156,170,25,68,137,194,65,179,19,143,51,59,157,133,166,76,201,228,244,56,62,199,212,175,208,71,80,67,200,68,54,67,98,204,13,56,200,0,123,126,101,
150,231,25,105,57,0,47,97,165,0,88,60,88,142,21,70,123,104,29,242,253,49,190,106,25,213,78,36,152,200,218,40,41,22,3,112,120,110,91,158,1,119,138,45,242,211,16,104,116,218,1,73,85,179,195,91,25,118,58,
193,12,36,96,164,226,28,128,231,14,139,111,121,94,147,248,211,51,17,65,222,34,129,50,194,100,24,1,83,166,68,236,233,237,150,137,233,17,113,59,125,144,226,36,8,25,23,143,187,84,218,26,183,72,125,77,163,
84,6,67,144,86,63,204,20,163,94,195,44,37,14,38,176,136,194,169,24,137,208,161,235,248,32,6,157,247,116,100,74,70,199,71,228,236,112,31,76,209,144,50,218,227,2,3,225,192,187,251,78,74,125,109,3,24,234,
71,78,147,210,177,29,208,172,100,42,9,230,77,74,41,152,237,68,4,149,6,35,116,94,29,121,153,55,0,192,176,153,145,154,137,216,192,202,92,142,180,245,218,82,25,23,62,95,1,3,230,231,130,213,209,204,79,39,
32,209,147,140,66,242,230,130,221,72,136,60,189,205,113,254,11,17,232,61,115,74,94,60,254,172,94,111,109,220,32,235,90,215,43,65,25,169,156,232,238,132,99,125,65,129,142,37,224,132,189,229,8,37,119,72,
83,253,26,41,15,148,99,14,39,230,196,124,201,164,76,129,40,41,196,239,100,40,181,128,141,8,179,145,248,36,120,28,142,154,196,162,134,120,220,30,169,171,169,147,154,234,90,105,111,89,39,99,19,163,210,211,
215,37,3,163,61,232,99,7,211,135,229,201,125,143,201,142,77,123,36,84,17,210,177,134,134,6,229,68,207,49,25,13,15,72,109,168,89,46,218,126,169,248,192,124,230,13,231,88,41,157,53,47,127,184,64,45,34,77,
140,38,147,248,52,109,89,146,197,153,205,100,73,124,85,246,252,109,231,124,44,175,1,5,221,104,251,213,201,168,74,162,36,152,50,136,50,250,32,115,44,226,243,22,30,243,12,165,233,52,136,255,204,193,71,197,
89,66,245,183,75,71,247,1,233,31,236,145,202,242,26,216,252,41,53,17,100,31,199,217,188,118,183,180,53,175,85,45,161,36,199,19,113,149,222,145,177,97,25,11,15,163,255,180,74,25,71,95,83,191,78,182,110,
220,174,38,136,201,219,56,114,131,131,199,246,201,108,44,2,205,132,237,119,122,97,182,42,52,222,175,170,172,70,184,89,38,77,13,77,82,93,85,35,163,99,235,148,200,35,19,103,84,43,30,223,255,43,169,14,54,
40,3,120,142,68,228,253,103,135,187,129,103,66,46,223,243,6,36,121,30,152,57,74,247,130,150,215,200,4,252,14,29,58,165,159,184,171,96,228,232,116,16,195,205,43,42,133,131,149,135,66,114,169,106,44,24,
117,137,175,32,252,28,3,20,140,28,156,221,172,2,74,226,21,54,142,79,41,157,153,141,200,161,142,231,149,248,202,40,156,247,121,2,64,42,174,209,74,137,29,204,3,40,53,149,13,178,117,195,14,169,14,85,171,
9,97,174,49,52,50,36,253,3,167,85,18,25,243,219,237,14,72,185,67,153,200,185,142,119,63,15,211,84,41,173,205,173,170,29,199,78,30,66,223,51,58,62,234,51,50,3,194,49,98,58,61,120,66,74,161,85,13,53,45,
210,220,176,70,37,189,169,190,65,66,149,149,8,113,79,73,71,215,97,104,85,82,72,120,18,141,78,94,205,13,142,253,222,32,206,247,67,75,59,100,215,214,93,116,215,152,249,92,22,228,192,20,10,163,21,0,144,248,
164,184,250,14,28,243,6,124,59,247,38,158,45,104,69,105,128,114,85,121,107,228,219,220,111,152,192,136,164,4,76,96,232,72,53,85,6,3,8,38,106,44,79,243,187,85,86,32,193,41,221,14,104,4,25,177,161,109,155,
108,90,183,89,77,70,2,132,54,38,160,67,198,39,7,208,175,4,54,216,3,38,251,205,204,138,24,156,164,218,122,151,140,78,140,200,154,166,102,153,141,207,200,100,100,2,230,202,15,34,114,62,204,1,109,179,227,
94,182,88,60,42,157,61,47,74,119,127,135,180,64,115,214,182,173,87,45,91,219,186,86,202,203,131,208,156,253,234,176,61,46,175,58,115,133,31,120,192,233,1,25,36,156,176,237,105,248,20,58,122,210,159,212,
100,31,74,60,9,79,231,75,166,81,51,245,31,14,25,17,225,91,81,109,21,6,48,130,226,132,70,3,140,205,229,100,243,45,11,9,162,20,145,250,214,21,194,206,245,129,80,69,141,28,57,249,52,146,171,144,34,64,226,
51,253,103,76,126,201,206,55,74,91,75,27,108,103,28,68,140,200,177,14,38,89,207,129,57,30,37,38,92,53,136,23,7,34,5,58,140,105,25,201,196,18,136,114,64,244,217,248,180,154,157,169,72,216,212,128,160,37,
240,12,10,156,69,0,228,207,202,144,120,98,26,9,223,35,96,198,97,185,100,215,149,82,87,139,92,193,235,146,221,219,247,200,254,131,251,165,119,224,24,52,168,82,113,229,0,70,138,69,170,171,171,48,95,4,227,
207,19,154,99,147,9,138,111,222,12,205,79,74,19,84,60,11,76,216,160,119,47,255,150,1,3,52,12,205,51,194,98,136,126,42,137,140,221,51,89,37,29,144,145,152,214,150,86,41,245,213,128,65,52,35,118,163,170,
232,127,197,222,107,165,181,165,69,109,44,165,232,200,241,35,114,248,228,195,72,152,42,33,245,62,204,133,136,2,47,37,2,144,33,178,75,189,56,15,133,66,175,229,225,176,250,225,36,169,132,127,132,197,148,
77,124,158,106,205,19,158,216,247,176,140,140,141,42,60,20,148,75,246,92,44,107,215,236,68,54,110,74,33,148,243,120,50,34,237,107,54,161,180,65,179,153,84,19,148,225,88,121,26,96,112,243,87,64,19,3,75,
222,92,195,60,21,211,138,98,128,78,134,137,224,113,129,16,94,24,124,142,9,60,230,100,188,174,210,199,99,168,40,34,7,159,215,35,85,208,2,154,35,210,131,68,189,108,207,27,165,169,177,1,81,75,28,118,221,
142,232,102,74,186,122,143,73,153,175,101,14,33,163,232,148,175,197,47,106,187,209,53,195,20,14,108,122,89,26,184,248,30,51,14,231,79,193,164,153,112,247,37,212,159,136,151,22,228,112,203,222,157,187,
165,189,121,27,164,125,82,205,28,131,134,154,170,106,237,99,4,33,143,163,69,131,37,62,13,125,0,151,18,223,210,65,12,177,66,91,197,4,153,59,11,9,110,33,3,216,231,155,17,182,249,239,184,72,137,103,104,200,
42,167,195,238,130,20,69,101,239,246,43,164,190,174,86,19,38,118,54,76,52,118,221,124,47,28,180,96,184,165,14,85,186,169,109,16,0,142,117,14,64,75,221,96,206,209,56,88,9,153,73,158,114,154,7,80,19,118,
109,219,1,179,23,131,127,57,139,62,70,56,234,106,107,192,56,222,67,198,206,183,5,95,245,2,133,140,189,44,188,230,123,47,127,84,148,6,204,73,123,30,105,101,8,37,159,200,227,147,68,64,66,171,47,146,130,
141,229,222,211,253,189,18,142,140,72,42,19,151,141,237,59,164,117,77,179,70,45,140,146,152,109,210,252,148,149,250,164,185,174,13,246,124,66,37,207,186,127,89,144,57,60,237,46,255,232,24,49,183,105,231,
18,104,241,253,208,20,16,213,202,226,91,155,91,242,93,114,240,57,14,61,79,152,247,108,223,133,8,40,0,66,162,74,123,250,132,76,79,79,35,9,100,210,73,38,80,88,72,100,176,177,0,127,139,62,236,51,119,156,
167,131,41,132,46,134,198,58,83,28,3,32,53,138,48,63,201,4,235,47,127,12,188,96,63,99,250,178,50,194,211,125,125,210,217,125,20,192,218,16,106,54,203,134,181,107,13,242,64,34,60,57,41,19,147,97,29,133,
113,252,230,141,155,165,190,106,45,212,127,26,8,82,41,13,19,45,32,151,251,180,224,88,238,250,252,121,67,124,126,167,109,223,185,249,18,56,215,16,190,49,201,75,168,63,96,222,65,65,242,251,125,178,125,243,
78,101,86,44,49,35,7,143,30,66,70,141,76,30,127,9,36,132,179,179,81,8,20,98,126,224,172,81,23,175,168,96,230,161,33,19,148,94,243,179,175,116,84,148,9,210,33,49,48,39,100,100,107,53,126,165,234,246,246,
157,145,99,39,14,193,129,186,144,180,120,149,126,147,145,81,32,65,73,119,201,22,16,216,233,98,201,56,33,29,39,78,200,169,254,147,184,102,147,166,186,118,217,184,14,153,177,223,47,123,118,236,145,3,135,
114,72,186,6,144,197,34,164,164,116,131,121,11,155,53,59,145,54,112,153,51,139,123,90,119,26,226,179,63,205,224,206,205,151,74,123,91,139,94,60,59,56,8,184,143,104,33,208,235,41,147,157,91,119,35,58,170,
145,218,154,106,248,131,141,240,77,199,145,95,12,202,227,207,134,81,135,42,215,160,33,158,136,34,147,15,200,69,187,246,162,226,154,79,208,212,30,1,14,130,2,64,148,78,36,14,218,124,205,86,191,46,122,43,
78,3,20,89,48,128,127,60,214,23,84,146,146,31,69,156,141,58,61,19,18,214,228,195,83,35,88,177,26,209,24,62,149,142,193,236,172,151,96,69,57,34,161,148,116,158,60,137,44,244,0,152,134,226,88,137,87,142,
117,61,37,79,62,247,27,141,255,233,180,183,111,222,129,82,114,157,22,226,24,239,47,175,9,243,25,39,217,176,124,35,241,13,107,18,72,28,183,109,218,43,237,237,173,148,89,152,199,62,121,238,197,39,52,140,
117,163,62,20,79,204,202,190,131,79,203,216,248,56,108,169,72,27,152,228,247,149,107,8,75,83,57,58,49,32,145,217,176,106,241,208,104,151,156,238,235,213,126,156,159,154,163,52,225,200,60,198,31,231,40,
166,21,199,0,150,159,169,90,124,233,224,102,82,114,123,104,116,68,162,177,105,45,253,154,228,201,13,155,234,81,251,206,218,206,154,230,70,172,100,217,100,96,120,72,94,58,125,20,246,181,90,74,108,78,137,
38,134,101,93,253,213,242,133,219,30,144,15,93,251,87,146,152,129,134,196,18,178,125,203,14,9,5,235,149,32,203,49,193,144,148,236,49,240,44,141,168,33,62,100,5,130,17,149,109,155,13,241,169,193,52,143,
47,28,121,22,66,66,88,221,170,109,46,148,31,88,228,59,218,121,20,166,20,82,14,223,212,214,178,86,18,208,26,102,225,196,137,218,76,63,194,124,97,96,232,140,86,94,213,20,105,121,222,192,98,136,191,18,92,
231,66,187,60,3,238,156,239,104,108,28,6,5,54,22,35,136,62,157,224,56,37,70,219,252,53,34,157,130,70,176,168,86,10,155,26,139,198,164,231,84,55,16,97,97,16,142,12,12,24,137,204,202,53,187,223,11,181,223,
43,155,215,239,148,106,15,84,190,171,83,156,232,179,99,219,54,36,113,43,49,129,44,200,207,135,108,123,169,70,66,129,5,74,192,173,216,49,209,222,186,6,183,100,165,15,230,242,208,209,253,90,17,53,78,217,
152,58,134,200,110,100,195,19,48,57,3,3,72,64,129,68,93,109,181,4,74,67,154,228,113,14,11,127,102,255,212,134,8,124,3,21,236,156,40,145,52,130,131,230,253,197,180,229,25,80,112,183,41,41,144,1,243,47,
13,225,32,129,213,85,198,153,153,120,154,195,153,234,32,75,202,117,117,53,234,51,134,71,70,224,116,135,212,71,152,49,50,82,10,94,116,247,117,104,205,40,130,69,243,163,72,198,142,119,28,150,201,201,105,
248,0,151,236,220,190,77,170,42,201,132,104,62,58,34,64,68,202,32,102,17,195,152,32,11,217,252,117,18,5,4,72,66,242,73,252,182,54,16,31,146,223,219,215,15,167,186,79,225,160,105,34,44,106,180,57,52,224,
230,61,204,196,251,16,189,113,93,129,121,76,67,93,35,180,57,161,61,180,23,24,27,131,185,10,6,170,212,97,91,59,44,44,218,104,88,172,150,194,130,105,238,214,37,15,138,114,194,72,87,230,236,126,225,40,44,
15,215,215,215,128,36,23,203,113,168,46,235,37,172,130,146,104,141,117,176,161,144,254,56,114,129,1,148,121,173,216,155,247,167,179,9,169,240,183,200,111,15,127,87,114,119,219,36,21,207,202,19,135,254,
21,165,223,42,56,197,99,114,113,96,55,252,6,156,226,246,237,114,240,112,22,213,78,172,23,192,185,219,80,98,119,160,198,195,117,29,200,25,230,203,155,66,140,201,239,54,27,174,67,131,72,12,214,150,182,110,
220,35,107,214,212,171,221,62,123,118,80,142,116,28,194,10,89,16,164,134,118,80,66,33,47,105,132,200,100,34,163,53,101,0,22,122,166,103,38,80,53,29,87,243,73,1,59,221,135,13,0,24,147,53,38,250,186,154,
80,131,108,219,178,25,48,57,213,108,225,86,220,107,40,67,221,204,162,134,180,140,98,154,78,5,239,197,49,0,163,51,237,55,18,83,112,55,14,83,233,172,52,54,214,33,86,118,200,161,35,135,20,80,170,101,21,0,
199,150,57,9,143,134,149,128,180,183,138,52,17,197,31,117,215,235,174,149,47,63,244,29,172,204,139,92,214,30,18,47,150,9,167,103,198,229,55,207,124,95,182,111,189,92,106,171,154,128,232,86,57,124,52,103,
214,3,178,189,50,54,134,73,33,184,53,40,45,211,102,155,120,28,146,107,247,0,150,152,156,153,194,102,28,132,30,219,215,181,9,170,208,72,250,18,50,60,60,38,29,39,143,106,96,48,24,62,9,255,99,8,134,149,67,
169,11,182,130,17,52,87,133,201,150,77,134,134,135,165,182,22,82,14,95,192,157,22,99,40,254,101,1,115,77,85,131,236,216,190,5,121,142,3,243,228,215,9,242,196,39,19,136,29,25,64,145,40,166,21,205,0,18,
149,156,46,12,177,140,1,68,124,12,41,175,172,12,74,101,69,21,74,201,253,8,207,202,164,172,204,132,146,99,19,44,148,161,4,224,114,228,25,0,124,33,169,241,212,132,212,86,108,151,239,124,244,83,88,71,205,
201,195,207,252,72,6,39,247,195,103,212,201,213,59,62,37,45,40,53,79,37,251,100,100,250,4,28,232,86,217,143,29,15,235,43,110,146,139,183,190,17,14,253,140,28,233,123,24,78,59,169,69,50,7,34,170,209,169,
78,152,181,122,249,79,111,186,3,107,11,219,81,233,44,149,145,240,89,121,244,185,31,97,79,208,1,113,65,131,198,166,78,201,59,47,254,132,236,217,124,133,150,204,15,117,236,147,251,31,251,50,214,39,26,197,
1,248,4,91,92,168,21,116,182,225,169,113,153,153,153,149,242,96,64,130,193,10,228,10,131,106,10,27,26,234,33,88,216,7,132,156,128,107,15,42,249,115,226,15,221,98,70,138,182,148,176,234,133,5,111,69,49,
96,96,236,172,100,28,149,226,130,148,205,45,13,130,195,106,247,242,156,206,64,231,200,36,214,227,185,0,226,245,177,252,128,229,61,36,92,38,154,177,102,198,122,1,204,68,36,54,37,151,160,20,253,39,127,240,
103,28,73,78,246,28,151,195,167,159,198,150,147,140,124,240,134,143,96,21,107,189,60,240,208,191,97,65,231,255,128,1,151,192,28,212,201,155,182,190,67,62,240,182,91,164,231,116,151,236,251,202,67,50,27,
137,41,49,38,166,59,101,115,195,59,228,191,125,248,203,200,184,183,105,120,204,217,98,216,56,124,255,131,247,35,121,154,64,80,32,114,199,173,15,200,219,223,244,222,57,34,189,253,154,247,202,230,182,93,
242,217,239,124,16,155,193,90,197,238,4,2,248,103,202,40,49,205,130,203,43,74,37,16,240,171,105,181,178,95,205,81,224,83,88,232,163,47,177,118,76,211,4,207,68,227,18,131,239,153,68,133,150,45,13,24,86,
106,43,50,192,20,163,89,83,143,33,65,26,145,76,138,33,152,87,215,81,185,228,199,77,178,10,0,128,72,2,195,217,89,46,164,219,53,177,98,134,59,139,45,220,92,96,57,151,1,4,7,234,137,127,216,95,10,135,22,211,
227,68,44,45,112,29,234,15,226,40,67,179,205,76,71,229,153,231,59,164,177,26,137,28,214,113,221,110,3,46,53,110,118,42,41,177,25,216,26,71,76,66,254,29,242,233,91,255,6,27,185,54,201,248,196,24,202,203,
79,67,16,76,24,58,48,220,35,3,19,34,127,117,203,223,200,59,223,252,62,152,176,81,249,254,3,255,34,141,245,205,242,206,235,111,148,27,222,250,1,104,215,179,242,131,199,255,86,54,180,108,64,4,3,32,52,7,
193,252,200,122,241,60,128,120,60,110,204,237,67,93,107,66,243,30,155,173,10,208,129,240,192,155,190,129,217,116,12,120,206,198,102,17,117,197,53,236,230,26,2,219,106,137,216,138,12,208,17,240,166,177,
13,28,16,23,33,166,81,92,227,139,54,144,107,179,62,47,24,130,117,211,177,209,9,16,115,6,139,43,46,124,71,54,12,10,115,177,155,73,140,229,224,172,241,148,254,208,118,192,174,72,240,124,54,149,3,114,0,56,
65,219,105,212,152,206,178,231,140,200,137,206,94,9,214,37,181,191,53,70,108,38,9,134,1,158,116,159,124,248,93,119,40,241,71,177,124,121,207,247,190,40,255,235,193,187,101,104,70,100,115,29,86,197,189,
40,178,173,217,37,55,188,229,38,108,165,204,202,183,254,225,235,114,199,167,191,132,189,30,34,191,122,232,103,242,150,107,223,46,215,95,253,30,249,222,67,127,139,185,33,209,110,224,11,16,8,51,53,152,165,
21,154,39,226,20,139,59,100,116,116,84,170,107,66,130,36,95,35,37,38,162,9,172,192,81,43,24,214,210,4,209,89,23,219,138,98,0,247,239,104,120,5,202,209,238,209,240,97,79,24,236,100,24,49,51,214,107,167,
82,50,50,56,137,114,131,13,47,246,225,198,41,68,68,176,149,140,138,210,216,163,74,192,204,250,177,81,115,5,80,17,85,5,128,31,0,241,185,119,10,76,33,131,216,216,159,139,166,51,51,81,57,211,217,33,55,92,
106,228,137,38,194,229,240,195,49,195,143,212,109,148,139,118,92,161,253,31,127,250,17,249,238,3,119,203,122,156,219,208,140,184,222,235,148,151,70,58,229,230,139,111,80,137,239,238,121,73,30,252,229,
189,114,205,13,187,164,107,248,160,60,254,204,163,114,221,155,222,166,9,215,150,218,173,144,240,211,18,116,215,0,86,3,152,19,17,17,69,65,77,109,214,14,141,76,35,168,24,145,161,129,8,246,253,148,138,215,
239,128,169,229,122,55,109,191,201,220,173,42,1,3,133,98,90,81,12,160,141,54,64,240,8,225,24,136,25,9,199,165,187,115,20,27,95,227,136,6,18,90,94,48,146,155,149,17,108,5,73,229,162,122,142,59,20,194,67,
17,13,217,152,17,243,94,230,137,26,74,90,206,11,144,18,112,240,81,29,182,5,184,94,134,86,80,26,123,134,69,166,194,248,130,198,157,114,1,236,235,156,140,244,203,21,187,223,169,139,239,17,108,125,249,229,
35,15,9,132,17,155,115,103,37,107,159,5,147,42,37,14,90,110,94,183,67,239,235,60,217,33,47,254,230,172,52,92,124,86,6,16,77,29,236,120,26,133,182,105,236,192,8,74,3,138,129,251,176,35,162,20,79,185,177,
48,7,170,138,205,145,147,129,145,65,104,66,28,9,231,52,8,63,11,115,228,145,73,56,232,161,33,44,131,66,219,235,26,144,237,175,171,4,94,249,208,22,28,163,220,144,82,197,180,226,24,0,241,204,34,6,167,22,
80,34,56,193,64,63,42,154,227,147,226,67,172,95,2,251,204,198,12,208,14,137,39,147,152,206,103,50,51,226,11,186,164,34,93,33,209,8,212,52,111,151,217,7,174,4,218,66,169,49,141,37,97,224,33,21,193,42,213,
32,158,197,142,60,89,3,51,82,85,85,33,59,176,246,143,253,169,218,217,160,70,19,49,141,173,139,45,26,24,12,12,158,193,126,207,195,178,165,173,89,106,155,170,196,131,237,137,78,152,14,151,63,172,201,20,
111,44,5,117,63,245,185,79,72,69,69,80,151,66,203,177,115,130,137,148,23,192,132,130,181,2,89,2,140,88,227,134,205,15,213,148,66,136,226,146,128,31,226,238,61,22,105,89,66,47,81,33,130,157,66,163,83,238,
61,53,44,21,213,8,85,67,40,101,164,32,246,16,48,221,61,88,32,92,218,121,153,183,85,24,48,160,183,233,179,95,32,190,106,1,45,8,230,97,76,79,9,96,83,83,129,243,156,211,68,5,56,73,9,130,45,100,13,189,170,
222,47,182,6,44,174,227,58,95,172,5,217,81,81,116,151,206,79,95,226,178,11,132,90,124,101,110,213,18,142,203,60,2,213,0,32,231,7,245,90,192,180,249,29,24,92,135,142,102,166,65,60,62,152,41,48,31,211,144,
250,41,169,171,175,149,16,230,242,131,241,98,199,54,65,79,171,46,194,167,146,105,185,242,178,55,200,213,87,93,171,253,231,222,0,15,5,171,12,145,14,34,76,105,104,45,23,135,15,126,139,154,170,145,157,177,
231,196,11,93,21,111,226,192,70,169,103,32,194,245,98,106,176,230,57,250,201,123,242,157,244,17,1,237,190,228,219,60,5,150,188,220,128,179,3,24,138,131,147,1,249,65,169,102,0,142,223,0,215,252,198,11,
30,227,156,94,203,103,169,92,118,76,33,51,74,37,113,191,234,38,195,208,28,234,40,211,146,140,155,72,129,83,167,146,25,196,237,160,51,36,150,206,82,207,33,74,58,126,22,201,82,3,182,152,132,123,229,237,
187,77,73,128,227,76,129,224,189,120,8,40,147,54,48,37,18,73,233,62,211,143,7,71,75,36,106,155,20,247,20,31,246,72,227,97,58,48,6,195,81,27,246,29,120,78,142,160,190,239,205,7,9,188,147,230,140,254,234,
196,233,35,226,118,84,168,191,113,3,15,79,94,219,200,28,123,142,230,197,100,203,10,24,222,136,183,226,78,58,40,209,77,86,110,211,44,152,180,178,122,174,252,185,10,3,204,205,102,2,26,22,140,138,9,105,203,
125,165,78,25,58,107,54,35,89,182,157,147,210,12,105,134,10,160,9,224,244,36,246,1,245,132,65,8,44,108,147,1,24,195,237,40,147,23,161,92,235,92,216,77,150,135,47,26,73,201,192,11,160,95,122,2,247,155,
179,41,68,37,179,251,69,6,67,81,57,210,137,210,247,91,204,226,58,111,193,208,40,105,204,251,12,62,33,195,237,164,61,47,13,74,96,188,84,88,247,35,209,6,144,135,196,102,97,91,208,14,30,124,81,110,251,200,
71,245,120,225,91,253,30,236,67,133,73,154,24,235,23,167,199,33,85,181,165,82,223,18,80,92,105,106,24,142,154,198,153,225,195,48,121,26,47,23,66,99,151,135,187,185,73,29,195,12,101,24,168,85,76,91,133,
1,160,18,26,17,209,40,8,159,164,24,109,121,117,99,41,108,35,214,77,39,98,136,14,18,42,193,52,25,36,30,85,18,30,76,165,190,247,36,54,201,134,225,16,81,55,49,141,64,226,136,67,89,212,207,95,145,124,137,
192,250,202,5,30,54,69,30,1,144,51,159,7,16,81,34,79,62,77,69,38,181,79,176,188,66,118,111,217,45,199,79,191,136,104,170,20,230,11,225,163,221,141,61,63,140,231,17,147,162,53,53,54,235,231,142,43,215,
75,202,134,252,4,91,238,181,193,98,164,178,224,158,29,147,64,106,210,208,188,83,93,88,211,0,97,107,155,74,149,184,204,89,120,141,194,72,226,251,97,42,253,1,23,124,133,95,220,62,48,0,231,172,70,90,45,70,
206,186,122,238,231,42,12,48,157,213,164,96,80,50,130,141,31,180,145,85,141,126,9,213,251,96,74,210,210,223,141,173,134,96,6,205,67,50,65,68,144,9,227,51,17,71,25,194,195,58,250,60,76,180,167,76,46,242,
232,155,73,248,142,216,156,102,131,18,199,230,103,72,130,6,75,43,216,176,32,21,33,56,9,52,10,64,100,42,138,157,20,130,253,60,93,90,10,9,85,86,201,206,45,151,74,95,228,69,9,249,66,50,137,154,146,223,135,
231,0,98,35,216,101,215,167,247,53,55,175,17,71,43,162,156,108,68,236,110,216,109,135,121,174,32,147,197,115,101,152,151,33,182,130,6,220,184,47,117,150,129,67,150,219,100,12,78,188,198,214,178,161,82,
42,107,17,124,192,18,176,169,201,228,33,4,130,50,101,52,128,87,86,111,244,22,171,54,74,156,21,223,234,39,191,131,72,148,20,74,167,219,231,144,250,214,50,5,136,231,19,96,136,58,37,130,3,168,141,9,155,159,
134,223,121,137,192,158,211,224,107,251,166,176,173,112,202,72,117,83,99,147,94,142,150,116,128,248,144,96,44,222,179,145,129,28,191,10,197,182,23,58,127,139,202,229,48,18,46,175,188,251,250,155,228,20,
252,66,206,119,82,146,246,113,196,250,216,122,130,49,15,28,122,94,153,212,222,182,86,62,246,129,143,201,201,103,134,84,163,163,169,113,57,60,54,32,83,137,49,56,83,70,54,121,1,3,100,132,141,4,183,180,141,
66,70,41,103,180,83,213,0,206,35,184,160,22,242,69,227,99,232,131,222,128,203,88,11,131,29,68,113,197,86,28,3,48,40,165,223,16,210,104,2,166,225,180,122,158,17,134,19,81,140,215,143,221,204,144,150,216,
108,10,140,201,192,12,192,108,192,76,169,198,44,1,6,133,134,47,69,147,76,97,52,11,71,124,170,175,71,207,110,218,176,89,254,250,235,95,128,109,22,249,228,141,127,39,187,182,92,164,217,53,35,15,110,91,244,
123,91,229,232,217,3,242,219,167,30,211,254,23,239,185,76,238,255,220,253,178,166,242,13,114,249,174,107,229,198,203,63,40,235,171,130,114,239,47,190,137,181,104,236,124,67,181,245,246,143,254,153,252,
231,143,127,24,165,131,113,241,149,132,228,79,174,254,143,178,167,237,90,153,192,179,4,118,152,44,67,122,12,7,112,156,44,151,130,208,36,62,133,138,81,143,191,220,60,10,75,102,40,77,242,52,48,244,201,159,
35,46,28,160,136,86,36,3,232,3,10,153,96,56,173,12,33,27,112,13,15,113,104,92,207,164,137,12,160,3,229,99,77,22,83,22,217,27,149,46,2,76,40,13,27,144,92,75,176,81,228,193,159,223,143,157,19,97,84,52,203,
229,246,219,62,41,63,251,238,168,220,114,211,127,145,151,186,184,153,138,185,66,37,136,143,69,242,236,164,180,212,52,201,231,191,249,9,57,240,226,62,37,240,123,222,241,126,249,238,23,30,148,111,125,238,
71,242,165,207,124,67,218,27,182,200,88,175,200,55,190,243,63,145,76,141,201,218,246,117,242,141,47,127,75,30,255,223,221,242,179,127,218,39,127,255,213,127,149,15,189,251,86,25,120,9,121,134,221,60,123,
70,152,24,88,120,252,136,164,240,23,139,2,31,68,113,52,57,14,20,236,44,188,121,205,8,101,254,51,79,11,50,67,227,13,133,118,229,183,162,24,160,74,198,65,49,42,213,235,156,23,76,14,99,253,52,76,81,28,5,
53,38,45,113,0,76,160,97,12,33,49,112,190,121,250,90,160,168,15,128,182,115,29,150,82,197,241,168,49,12,153,91,170,218,229,199,143,252,76,190,253,79,223,16,38,87,52,113,116,198,63,188,255,251,242,231,
159,249,152,156,234,69,113,109,8,27,167,74,48,111,73,18,225,162,95,38,147,147,242,225,79,222,36,63,254,233,3,210,127,166,15,99,66,114,17,14,158,29,236,19,95,69,78,54,110,243,201,191,60,244,3,249,243,207,
222,46,79,63,251,20,114,134,8,182,165,212,106,6,76,166,118,116,30,67,182,135,159,66,65,26,77,1,162,143,97,206,225,201,59,215,89,152,69,53,71,96,12,113,164,86,24,34,47,197,133,56,68,0,0,17,92,73,68,65,
84,160,5,240,96,20,168,194,10,102,104,91,197,6,21,229,132,11,185,108,17,81,63,49,135,214,125,64,164,161,211,51,18,69,129,140,217,43,99,250,153,201,36,136,143,34,86,192,1,39,140,77,88,144,32,246,181,238,
163,180,179,152,199,77,90,124,0,131,213,84,1,175,184,237,253,242,171,154,228,223,159,252,188,252,246,224,143,100,77,112,167,188,244,82,183,252,246,231,207,74,112,131,200,187,62,116,181,154,33,31,178,230,
102,44,11,178,236,80,139,44,118,20,121,194,251,62,244,1,217,115,209,70,60,63,176,22,139,46,17,25,78,62,33,129,138,74,105,196,98,143,207,91,33,247,254,252,7,114,239,79,126,32,111,218,115,57,74,25,65,236,
222,24,151,199,177,133,158,180,218,216,82,133,236,56,130,194,155,137,104,202,42,92,56,198,154,50,76,207,12,42,175,44,161,16,254,145,126,20,28,221,118,41,11,193,20,49,12,91,216,112,138,204,41,214,4,21,
199,0,229,170,177,111,150,56,147,41,4,136,166,102,176,123,70,166,195,32,62,237,61,0,160,84,71,194,88,118,172,117,35,148,179,75,160,210,45,163,103,163,216,138,98,178,75,110,103,103,99,232,200,245,133,137,
240,4,182,131,12,107,225,45,212,232,146,96,3,34,44,217,32,103,78,157,148,95,61,118,20,229,4,145,77,87,54,232,82,102,44,61,44,25,232,109,57,56,224,240,82,90,177,233,23,143,226,86,150,87,75,245,229,110,
25,8,159,144,23,14,156,80,252,55,212,149,107,153,192,83,134,149,44,159,77,246,58,154,36,50,145,148,3,253,207,160,162,11,147,131,40,183,189,38,8,1,193,46,14,219,140,10,3,225,47,129,153,41,171,196,243,11,
144,116,150,189,227,168,186,50,196,102,163,21,232,237,156,148,250,182,82,9,214,50,108,211,211,115,111,188,31,183,169,38,204,157,92,225,160,40,6,24,251,111,108,125,225,140,148,231,177,179,49,153,28,79,
168,148,115,114,54,218,79,38,86,148,156,96,141,27,210,2,34,15,195,118,2,120,62,152,49,29,29,20,233,18,217,189,109,175,246,103,141,254,241,99,79,203,214,77,1,9,84,163,222,226,70,166,59,58,45,177,233,0,
126,3,130,219,70,210,42,157,148,194,128,163,10,209,23,204,18,126,50,129,129,75,18,229,107,154,156,76,14,33,35,106,55,149,21,213,216,16,108,86,223,146,120,78,120,12,117,233,38,172,142,121,160,137,53,235,
176,167,191,43,45,13,142,26,248,14,135,154,189,76,46,9,45,34,241,81,74,134,229,98,84,19,172,198,35,78,165,208,90,204,51,53,102,178,111,203,4,153,16,26,219,108,122,160,9,48,81,190,50,212,200,168,9,150,
153,37,241,117,73,82,81,91,245,173,40,31,64,103,99,49,161,208,28,209,118,147,33,4,190,176,17,88,66,52,57,106,18,52,58,179,242,42,60,11,156,166,133,229,67,15,113,249,218,87,255,90,46,187,248,74,189,237,
192,11,251,37,131,66,103,109,3,10,63,72,160,166,193,208,145,62,156,112,224,217,3,219,52,36,30,123,115,80,31,160,226,228,236,73,112,24,229,109,6,40,120,169,184,65,228,56,167,29,112,228,236,9,149,102,154,
38,135,151,59,35,50,48,143,179,154,147,184,1,71,227,6,159,184,131,120,162,50,61,45,57,39,30,181,114,48,88,192,195,37,16,26,54,10,79,176,6,121,11,252,87,116,58,169,166,148,210,111,9,23,251,112,46,197,25,
39,11,233,177,240,152,125,87,107,69,105,128,25,216,50,65,102,72,2,196,58,138,31,210,22,30,62,87,74,216,131,209,194,76,24,171,100,147,88,162,132,6,84,212,185,37,54,101,151,35,88,236,254,229,87,126,46,215,
93,253,54,29,232,232,177,35,242,141,127,252,239,178,227,18,176,198,157,130,233,74,202,216,128,89,85,82,70,46,144,38,158,203,130,56,76,228,40,24,252,211,70,250,225,165,44,214,27,205,105,39,236,117,108,
22,102,178,107,86,234,215,227,9,73,44,208,52,226,115,176,27,143,180,162,190,207,53,12,226,194,91,82,137,172,132,26,61,226,41,51,210,79,188,96,125,225,215,48,23,101,13,141,107,45,25,44,30,209,183,185,124,
204,252,243,23,242,96,144,86,54,214,142,44,184,204,109,203,190,159,43,186,203,116,51,49,174,209,2,106,130,229,229,57,185,7,15,211,251,224,108,19,49,38,102,76,211,17,17,37,209,7,106,73,96,39,6,241,131,
78,240,19,124,98,168,182,21,219,59,144,241,163,246,165,203,151,15,253,226,167,114,251,103,254,88,194,153,110,36,56,205,40,105,204,194,164,129,248,116,120,36,40,91,158,176,231,126,242,36,81,164,80,228,
49,215,206,139,251,243,50,133,65,153,208,141,213,43,70,106,30,155,212,173,69,30,81,142,197,117,16,157,176,38,177,53,134,118,191,162,158,229,143,28,36,31,194,48,145,210,80,154,248,16,47,11,55,126,6,170,
161,142,16,4,38,158,133,81,161,37,172,243,244,95,57,12,42,74,3,128,166,78,178,8,89,34,13,90,84,53,99,139,31,108,50,137,198,200,129,118,114,122,44,37,9,72,94,52,146,145,169,145,36,16,115,138,179,20,37,
225,43,156,242,205,127,255,31,242,205,123,157,242,211,3,191,145,141,40,184,54,55,227,89,175,104,4,8,195,28,128,88,100,220,106,141,132,165,67,92,18,166,5,55,207,49,1,176,12,118,69,65,124,175,6,7,252,36,
156,49,156,119,67,154,131,181,46,173,251,83,96,198,206,152,2,30,239,13,214,34,36,133,79,200,128,17,41,248,5,55,112,245,129,121,115,245,159,5,50,192,123,138,213,128,162,24,64,231,57,199,89,21,197,121,12,
21,57,8,77,168,201,60,245,200,43,36,160,55,96,151,225,238,56,42,148,89,172,136,33,94,47,197,50,162,31,82,134,71,84,199,35,79,34,19,21,185,230,162,86,68,26,136,97,240,131,29,211,74,124,115,239,252,232,
139,143,230,113,37,76,133,102,145,90,177,124,179,152,64,120,134,79,197,165,182,221,173,204,46,175,117,72,0,14,153,194,67,60,201,212,240,32,215,155,25,54,139,84,54,56,177,30,109,162,54,74,181,53,63,251,
46,213,120,150,79,74,46,115,121,209,45,197,49,0,136,102,97,215,104,122,230,65,40,24,139,167,243,166,80,207,66,235,184,197,163,162,209,41,195,93,40,67,67,197,71,251,18,82,187,22,235,167,112,160,165,190,
38,241,195,54,167,211,179,186,39,104,118,144,43,105,184,135,142,112,105,188,10,38,51,135,10,9,224,41,70,3,172,155,45,38,68,167,161,149,163,41,213,202,185,8,6,3,178,58,58,61,150,134,198,242,201,121,228,
41,129,18,41,171,70,180,164,101,7,140,178,50,143,173,105,0,19,59,22,135,72,17,202,110,134,82,105,195,160,70,19,86,249,68,63,2,237,66,236,237,46,53,246,60,9,31,49,214,135,157,13,4,13,25,108,214,30,211,
56,158,223,73,4,154,30,109,69,34,9,64,232,1,244,207,220,88,220,59,153,128,220,79,226,51,249,93,117,28,1,226,202,136,42,58,149,150,241,126,36,93,249,136,200,95,129,147,136,176,212,212,177,95,158,225,69,
125,162,127,49,173,40,13,40,12,65,139,25,212,234,67,100,25,61,40,210,144,174,232,84,70,38,250,160,214,205,14,181,181,100,45,151,147,29,8,49,25,89,16,113,246,93,173,89,242,101,5,7,171,245,47,188,78,201,
102,213,131,54,159,236,99,148,195,162,97,44,146,149,209,83,200,198,49,191,250,32,124,26,31,3,237,199,0,76,174,138,109,106,126,138,236,95,156,6,128,42,134,9,38,234,88,77,2,212,84,33,66,160,115,139,207,
208,188,24,194,82,202,103,195,216,210,222,151,127,136,27,88,113,177,59,216,72,73,3,19,16,93,20,171,230,170,1,192,212,152,197,34,72,147,215,44,70,52,222,32,170,154,85,38,43,183,149,32,222,135,96,144,248,
20,22,102,247,42,4,232,63,51,142,159,193,33,76,100,20,78,174,134,55,175,207,209,41,111,147,87,142,129,32,124,43,130,142,132,85,27,16,165,180,25,100,87,103,173,74,25,132,41,50,2,81,43,108,184,149,190,33,
58,137,226,27,54,1,5,155,240,52,60,66,66,150,10,170,218,74,100,106,16,63,122,129,48,149,18,168,82,88,120,175,117,108,77,15,2,81,130,137,52,91,158,190,86,175,249,79,94,64,23,36,211,58,102,89,45,74,35,53,
38,235,229,253,179,99,89,153,28,160,154,158,59,39,133,38,1,225,137,66,96,252,248,209,24,13,68,230,71,45,56,202,79,80,112,134,62,32,15,86,193,217,165,15,87,102,64,254,30,240,21,3,50,27,180,176,95,122,176,
185,179,128,137,251,115,240,196,210,156,61,157,187,134,33,168,9,216,62,41,99,167,50,82,94,111,71,153,0,149,81,248,138,202,86,36,77,147,144,200,9,132,123,38,10,68,78,128,59,11,168,75,230,242,4,53,71,225,
97,22,140,62,52,37,16,222,115,16,87,243,199,243,80,48,84,175,149,144,46,63,125,18,114,21,152,188,200,8,24,48,110,52,148,99,204,161,71,52,117,94,60,176,13,211,228,173,32,65,243,184,23,192,66,72,148,115,
230,96,238,80,77,16,57,90,68,43,142,1,152,220,82,193,34,198,84,85,70,201,71,139,104,120,240,17,4,55,119,145,32,36,20,27,241,192,74,160,132,251,128,32,86,14,105,18,152,172,249,81,22,118,7,192,160,25,252,
22,5,238,37,163,40,189,138,15,111,2,94,36,40,126,254,13,206,27,161,34,48,192,207,204,73,100,8,242,156,119,158,150,52,227,39,41,16,4,224,58,198,195,243,217,96,38,240,128,195,71,161,84,102,64,124,50,153,
57,11,119,229,17,44,50,215,210,62,165,55,230,226,60,198,215,160,3,219,42,116,229,101,250,11,226,90,76,43,138,1,58,22,32,226,31,134,95,125,92,116,35,34,229,168,106,134,97,67,147,179,60,97,8,231,15,97,189,
21,68,193,102,58,137,142,155,180,62,26,166,186,35,189,71,137,153,196,164,83,246,85,194,52,225,152,123,69,241,76,132,246,39,161,56,46,127,139,138,204,34,51,73,52,50,143,12,199,227,1,58,15,25,206,235,88,
110,80,109,227,61,100,98,124,26,218,21,198,51,99,96,172,105,216,219,4,205,163,0,16,53,94,35,227,217,248,30,168,7,12,65,250,10,61,149,63,107,29,47,243,137,27,231,71,88,166,79,193,233,149,25,80,143,158,
3,64,6,113,27,235,252,54,72,79,49,244,231,248,148,32,70,56,213,237,144,206,81,96,128,127,190,74,36,99,144,68,171,149,130,224,225,126,252,186,21,108,45,126,112,16,82,140,104,4,68,160,185,240,150,219,33,
181,96,22,164,87,240,157,247,211,12,40,114,120,59,71,194,160,17,129,26,51,42,197,67,215,29,112,192,62,100,96,124,10,182,28,126,135,146,79,184,168,65,28,43,216,224,144,82,48,143,56,241,62,63,126,7,54,54,
133,254,52,59,72,36,189,32,62,251,171,57,50,195,175,254,206,241,17,241,177,48,88,76,91,153,1,249,17,176,73,213,230,66,173,63,109,137,28,9,80,204,232,232,99,131,36,186,215,204,119,158,35,28,48,115,194,
30,59,90,75,100,240,68,66,35,32,250,6,108,70,206,219,230,12,76,24,164,19,133,49,55,234,77,116,214,37,128,193,242,9,90,22,182,134,37,60,24,143,196,162,137,73,99,67,40,243,14,70,96,36,102,138,27,68,209,
52,217,3,165,25,242,50,3,174,108,192,227,76,26,96,152,129,80,20,21,119,13,136,94,99,250,207,193,106,46,23,253,206,165,88,7,39,67,91,141,192,43,94,215,157,229,192,9,59,156,83,250,184,62,43,127,20,149,243,
105,6,174,185,17,74,160,17,46,15,202,17,72,130,224,231,141,29,166,207,192,84,52,75,241,136,121,12,136,102,137,11,255,100,18,235,77,140,82,140,67,70,87,244,101,226,199,90,13,195,76,125,129,200,108,52,63,
121,90,232,119,50,137,47,111,0,181,41,254,36,26,76,36,199,49,189,209,133,7,196,145,159,11,96,197,153,162,26,97,195,172,28,1,131,207,15,189,212,205,43,49,32,87,139,31,214,24,62,60,156,0,55,199,93,120,210,
157,191,51,201,8,98,229,33,151,154,102,241,57,197,19,196,161,52,178,58,58,135,52,187,226,34,9,167,37,0,19,82,72,18,246,155,106,93,98,197,233,5,67,234,88,121,193,200,232,166,48,18,221,80,149,91,35,205,
224,249,27,244,52,238,192,74,154,11,219,207,51,196,231,85,108,132,155,240,195,151,32,196,224,194,235,60,181,160,165,139,38,91,150,1,236,188,243,143,234,8,90,50,147,180,119,113,175,60,126,130,46,143,38,
79,159,95,35,40,36,82,18,4,227,142,3,35,209,180,185,148,72,44,117,98,63,41,119,29,235,30,28,76,197,135,49,38,70,240,196,77,4,75,159,75,216,87,131,26,55,2,227,249,52,174,231,98,75,9,239,25,196,70,33,50,
146,227,235,156,140,85,209,160,221,170,1,118,48,192,210,36,189,112,30,111,121,156,108,172,2,79,14,166,224,113,36,158,225,15,89,47,96,68,225,20,203,50,128,157,42,251,189,188,217,49,53,156,62,16,194,255,
211,227,114,225,103,72,73,161,151,5,242,34,166,155,249,117,20,152,18,108,234,242,97,63,209,232,208,20,118,34,160,66,9,135,31,199,195,119,85,117,101,178,126,87,149,58,127,107,202,218,53,1,233,58,56,46,
225,241,89,16,143,155,111,205,80,124,231,118,200,181,219,170,165,166,25,33,22,46,240,18,137,238,47,243,200,241,125,204,40,17,68,128,248,220,169,151,6,115,241,27,207,24,3,229,103,108,245,126,181,164,138,
240,56,96,38,167,6,176,229,171,63,54,226,15,58,241,59,130,120,204,230,149,50,0,191,25,154,46,95,35,222,167,191,127,230,112,219,214,138,23,124,1,215,30,44,92,80,13,144,192,191,58,13,38,93,54,239,173,151,
138,190,82,25,197,147,39,124,46,44,88,233,151,13,59,107,177,206,140,74,36,234,239,92,121,35,19,252,120,186,187,161,45,40,19,163,51,170,37,60,71,109,161,217,41,11,120,165,174,25,191,237,0,34,179,134,3,
15,1,231,128,61,172,13,101,178,113,39,30,115,58,52,128,109,241,248,69,219,154,128,110,186,13,226,39,157,73,120,43,71,121,117,176,65,186,10,27,57,220,197,128,86,206,184,253,142,89,172,8,50,165,180,50,153,
69,211,172,168,1,143,61,38,217,43,223,93,149,126,170,15,79,201,158,138,255,176,60,228,223,227,114,102,73,124,22,92,9,255,121,52,115,59,137,232,2,97,215,97,239,78,243,218,144,110,109,241,225,187,11,196,
103,162,165,59,6,49,11,165,139,196,45,7,115,184,247,136,139,231,92,151,37,3,248,208,94,99,43,158,51,198,147,237,52,55,76,206,180,81,74,48,77,83,123,165,222,199,115,165,216,217,70,95,162,251,57,243,215,
181,239,121,190,129,233,57,236,146,182,141,245,71,83,7,126,54,216,15,77,232,3,241,185,43,24,197,21,125,72,128,179,45,106,22,168,139,46,228,79,228,158,250,201,88,162,101,111,85,230,225,127,120,233,97,108,
215,190,182,174,61,112,61,212,10,79,164,173,26,97,45,55,230,178,231,253,216,242,94,22,48,155,97,117,193,131,14,109,65,43,7,1,91,214,214,72,231,209,46,68,69,248,253,103,120,112,15,8,223,212,22,194,70,47,
23,68,13,12,88,66,52,66,88,104,103,211,10,39,162,38,86,64,95,149,134,185,248,156,179,221,5,99,134,103,117,15,61,130,167,194,69,142,150,86,186,134,38,135,244,71,232,144,203,51,124,161,8,45,110,252,33,209,
197,103,11,206,64,194,236,235,46,173,44,237,122,110,2,69,2,217,250,167,95,187,234,43,161,70,255,166,216,12,247,107,231,32,147,75,161,91,48,192,203,56,84,72,248,6,164,150,160,161,218,117,74,60,165,119,
58,28,83,105,231,240,94,191,11,91,197,185,125,133,166,103,113,155,27,151,151,150,25,123,241,93,243,103,10,41,180,112,124,8,126,14,187,38,148,8,251,126,222,59,245,216,15,187,158,175,168,243,254,58,60,20,
59,134,17,78,224,133,244,82,162,232,6,182,47,110,197,48,128,115,58,215,238,168,13,118,31,30,174,197,227,70,59,110,254,203,139,62,91,219,26,216,132,93,99,57,132,145,96,63,163,83,192,176,16,186,197,243,
157,255,153,60,131,116,91,72,126,62,106,203,220,202,22,103,40,164,216,249,207,184,104,4,186,120,76,161,235,94,120,64,195,134,109,248,185,125,191,56,61,245,232,247,79,28,15,86,123,30,141,76,196,59,177,
230,208,137,27,251,240,154,194,107,217,255,65,99,85,6,112,118,106,1,62,92,27,118,134,66,39,15,141,51,233,223,242,135,159,190,236,163,45,91,170,174,44,133,228,233,22,109,168,159,170,55,111,248,93,55,37,
240,2,42,47,171,136,11,250,21,5,27,57,75,18,227,99,129,80,81,3,33,239,54,221,41,135,235,195,253,211,233,167,127,218,53,241,194,163,189,71,203,66,158,231,227,179,169,147,169,120,166,11,119,158,194,107,
2,175,248,114,210,143,107,40,220,173,98,130,216,137,141,115,226,195,221,176,173,50,52,218,51,81,139,223,49,106,222,125,77,235,245,59,174,106,126,107,77,115,96,77,160,194,91,194,125,149,4,112,73,200,57,
200,92,35,102,191,159,141,78,158,155,143,39,134,103,82,221,135,71,166,127,113,239,225,51,192,164,3,15,170,28,155,28,75,156,193,255,108,69,194,247,226,133,82,163,176,60,184,172,253,199,181,226,25,160,157,
243,76,168,170,242,5,253,53,174,218,222,227,147,244,11,109,120,62,107,231,174,107,154,55,135,234,203,106,93,238,18,174,2,51,95,32,39,22,200,15,71,249,253,109,120,14,44,11,243,146,26,56,53,17,57,249,226,
208,8,48,65,169,82,122,43,234,74,7,195,67,51,216,220,42,103,243,231,24,134,174,74,124,244,121,121,12,208,27,12,19,24,82,148,54,108,172,170,116,218,178,149,189,157,19,44,232,162,182,169,47,214,46,81,130,
227,94,103,173,166,188,30,24,65,149,229,139,142,148,137,85,52,16,242,70,124,62,199,204,84,36,49,21,155,76,146,224,100,8,77,142,102,192,248,92,81,242,113,93,91,209,38,200,186,129,159,48,51,244,9,12,228,
200,8,127,117,83,160,204,231,113,151,229,74,210,190,76,206,238,177,165,179,110,248,3,23,180,0,154,0,45,128,101,66,191,223,223,134,159,74,130,101,5,3,108,89,100,215,41,252,192,84,114,98,100,54,142,135,
188,25,98,146,224,124,49,222,215,164,11,120,179,130,80,84,123,69,12,224,200,96,2,137,74,70,208,55,80,218,201,12,190,120,204,23,25,196,235,191,223,196,7,2,5,141,26,192,172,150,47,106,2,42,74,250,105,149,
27,138,146,122,220,51,215,94,49,3,172,17,242,140,224,87,139,216,252,180,94,60,255,122,98,64,161,41,34,51,248,210,115,144,122,126,190,236,118,222,12,88,56,99,1,67,120,233,245,68,124,226,51,71,228,87,74,
112,14,82,216,94,117,6,20,14,126,225,120,117,10,208,84,92,104,175,33,5,46,48,224,53,36,62,167,190,192,128,11,12,120,141,41,240,26,79,255,127,1,71,57,62,220,171,148,199,114,0,0,0,0,73,69,78,68,174,66,96,
130,0,0};

const char* WindowComponent::jucelogo96_png = (const char*) resource_WindowComponent_jucelogo96_png;
const int WindowComponent::jucelogo96_pngSize = 13488;
