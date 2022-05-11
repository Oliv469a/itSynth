/*
  ==============================================================================

    AdsrData.cpp
    Created: 3 May 2022 8:40:57pm
    Author:  Olive

  ==============================================================================
*/

#include "AdsrData.h"

void AdsrData::updateADSR (const float attack, const float decay, const float sustain, const float release)
{
    adsrParams.attack = attack;
    adsrParams.decay = decay;
    adsrParams.sustain = sustain;
    adsrParams.decay = release;

    setParameters(adsrParams);
}