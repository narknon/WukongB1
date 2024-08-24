#include "CLSPlayerLightDataBase.h"

FCLSPlayerLightDataBase::FCLSPlayerLightDataBase() {
    this->Intensity = 0.00f;
    this->Radius = 0.00f;
    this->AttenuationRadius = 0.00f;
    this->bCastShadows = false;
    this->CastShadowMapShadow = false;
    this->ContactShadowLength = 0.00f;
    this->bUseTemperature = false;
    this->Temperature = 0.00f;
    this->VolumetricScatteringIntensity = 0.00f;
    this->SpecularScale = 0.00f;
}

