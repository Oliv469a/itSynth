/*
  ==============================================================================

    OscData.cpp
    Created: 4 May 2022 12:35:26pm
    Author:  Olive

  ==============================================================================
*/

#include "OscData.h"

void OscData::prepareToPlay(juce::dsp::ProcessSpec& spec)
{
    prepare(spec);
}

void OscData::setWaveType (const int choice)
{
    switch (choice)
    {
        case 0:    
            // Sine wave
            initialise ([](float x) { return std::sin (x); });
            break;

        case 1:
            // Saw wave
            initialise([](float x) { return x / juce::MathConstants<float>::pi; });
            break;

        case 2:
            // Square wave
            initialise([](float x) { return x < 0.0f ? -1.0f : 1.0f; });
            break;

        default:
            jassertfalse; // Du skal ikke v?re her!
            break;
    }
}

void OscData::setWaveFrequency (const int midiNoteNumber)
{
    setFrequency(juce::MidiMessage::getMidiNoteInHertz (midiNoteNumber));
}

void OscData::getNextAudioBlock(juce::dsp::AudioBlock<float>& block)
{
    process(juce::dsp::ProcessContextReplacing<float>(block));
}
