#include "CLSHeightFogData.h"

FCLSHeightFogData::FCLSHeightFogData() {
    this->bValid = false;
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->InscatteringColorCubemap = NULL;
    this->InscatteringColorCubemapAngle = 0.00f;
    this->FullyDirectionalInscatteringColorDistance = 0.00f;
    this->NonDirectionalInscatteringColorDistance = 0.00f;
    this->DirectionalInscatteringExponent = 0.00f;
    this->DirectionalInscatteringStartDistance = 0.00f;
    this->FogMaxOpacity = 0.00f;
    this->StartDistance = 0.00f;
    this->FogCutoffDistance = 0.00f;
    this->bEnableVolumetricFog = false;
    this->VolumetricFogScatteringDistribution = 0.00f;
    this->VolumetricFogExtinctionScale = 0.00f;
    this->VolumetricFogDistance = 0.00f;
    this->VolumetricFogStaticLightingScatteringIntensity = 0.00f;
    this->bOverrideLightColorsWithFogInscatteringColors = false;
}

