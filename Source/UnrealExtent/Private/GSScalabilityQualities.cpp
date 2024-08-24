#include "GSScalabilityQualities.h"

FGSScalabilityQualities::FGSScalabilityQualities() {
    this->ResolutionQualityScale = 0.00f;
    this->ViewDistanceQuality = EScalabilityQuality::INVALID;
    this->AntiAliasingQuality = EScalabilityQuality::INVALID;
    this->ShadowQuality = EScalabilityQuality::INVALID;
    this->PostProcessQuality = EScalabilityQuality::INVALID;
    this->TextureQuality = EScalabilityQuality::INVALID;
    this->EffectsQuality = EScalabilityQuality::INVALID;
    this->FoliageQuality = EScalabilityQuality::INVALID;
    this->ShadingQuality = EScalabilityQuality::INVALID;
    this->GlobalIlluminationQuality = EScalabilityQuality::INVALID;
    this->ReflectionQuality = EScalabilityQuality::INVALID;
}

