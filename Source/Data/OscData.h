/*
  ==============================================================================

    OscData.h
    Created: 4 May 2022 12:35:26pm
    Author:  Olive

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>


class OscData : public juce::dsp::Oscillator<float>
{
public:
    void prepareToPlay (juce::dsp::ProcessSpec& spec);
    void setWaveType (const int choice);
    void setWaveFrequency (const int midiNoteNumber);
    void getNextAudioBlock (juce::dsp::AudioBlock<float>& block);

private:

};