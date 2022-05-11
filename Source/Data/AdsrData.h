/*
  ==============================================================================

    AdsrData.h
    Created: 3 May 2022 8:40:57pm
    Author:  Olive

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class AdsrData : public juce::ADSR
{
public:
    void updateADSR (const float attack, const float decay, const float sustain, const float release);

private:
    juce::ADSR::Parameters adsrParams;
};
