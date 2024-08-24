#include "CVarVolume.h"

ACVarVolume::ACVarVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->Priority = 0;
    this->bEnableOnlyInRaytracing = false;
    this->EnableOnlyBelowQualityLevel = 999;
    this->RuntimeTick = false;
    this->IsActive = false;
}


