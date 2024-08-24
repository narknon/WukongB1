#include "AkSpatialAudioSettings.h"

FAkSpatialAudioSettings::FAkSpatialAudioSettings() {
    this->MaxSoundPropagationDepth = 0;
    this->MovementThreshold = 0.00f;
    this->NumberOfPrimaryRays = 0;
    this->ReflectionOrder = 0;
    this->DiffractionOrder = 0;
    this->DiffractionOnReflectionsOrder = 0;
    this->MaximumPathLength = 0.00f;
    this->CPULimitPercentage = 0.00f;
    this->LoadBalancingSpread = 0;
    this->EnableGeometricDiffractionAndTransmission = false;
    this->CalcEmitterVirtualPosition = false;
}

