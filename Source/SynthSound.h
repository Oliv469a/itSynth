/*
  ==============================================================================

    SynthSound.h
    Created: 3 May 2022 12:52:30pm
    Author:  Olive

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SynthSound : public juce::SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override { return true; }
    bool appliesToChannel (int midiChannel) override { return true; }

};