/*
  ==============================================================================

    SynthSound.h
    Created: 26 Feb 2021 3:18:48pm
    Author:  kolson

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote(int midiNoteNumber) override { return true; }
    bool appliesToChannel(int midiChannel) override { return true; }
};