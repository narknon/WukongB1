#include "GSEQG_SimpleTeleport.h"

UGSEQG_SimpleTeleport::UGSEQG_SimpleTeleport() {
    this->bUseCustomCapsuleSize = false;
    this->CustomCapsuleHalfHeight = 120.00f;
    this->CustomCapsuleRadius = 60.00f;
    this->ContextBase = EGSEnvContextBase::Querier;
    this->CustomActorContext = NULL;
    this->SceneItemClass = NULL;
    this->QuerierContext = NULL;
    this->PlayerContext = NULL;
    this->TargetContext = NULL;
    this->bContextNavProjection = true;
    this->NavProjectionMaxRange = 500;
    this->bEnableNavigationTrace = true;
    this->bEnableCapsuleTrace = true;
    this->bEnableNavigationProjection = true;
    this->bCapsuleHalfHeightAsVerticalOffset = true;
    this->bEnableCapsuleProjection = true;
    this->bQuerierNavPathExist = true;
    this->bPlayerNavPathExist = true;
    this->bTestCapsuleOverlap = true;
    this->MaxNavCost = 1000000.00f;
    this->NavProjectionTest = NULL;
    this->CapsuleProjectionTest = NULL;
    this->PlayerNavPathExistTest = NULL;
    this->QuerierNavPathExistTest = NULL;
    this->CapsuleOverlapTest = NULL;
}


