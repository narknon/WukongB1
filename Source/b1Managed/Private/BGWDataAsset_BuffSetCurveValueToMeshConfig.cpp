#include "BGWDataAsset_BuffSetCurveValueToMeshConfig.h"

UBGWDataAsset_BuffSetCurveValueToMeshConfig::UBGWDataAsset_BuffSetCurveValueToMeshConfig() {
    this->NotApplyToChrMesh = false;
    this->BothWeapons = false;
    this->BothChildMeshes = false;
    this->BothChildActor = false;
    this->BothHair = false;
    this->HairType = EGSHairType::TressFX;
    this->NeedRecovery = false;
    this->bFitRealTime = false;
}


