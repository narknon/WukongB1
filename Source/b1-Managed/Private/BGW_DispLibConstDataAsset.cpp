#include "BGW_DispLibConstDataAsset.h"

UBGW_DispLibConstDataAsset::UBGW_DispLibConstDataAsset() {
    this->MAX_UAF_REQUESTS_COUNT = 0;
    this->DBCUseUEFXPool = false;
    this->DBCPlanePPOffset = 0.00f;
    this->DBCGlobalCameraShakeProtectedTime = 0.00f;
    this->DBCTinyOffsetBeHitDefaultDistance = 0.00f;
    this->DBCAttachConstraintValue_FixedTime = 0.00f;
    this->DBCAttachConstraintValue_RootVelocity = 0.00f;
    this->DBCAttachConstraintValue_AttachedSocketVelocity = 0.00f;
    this->DLDWorld_BP = NULL;
    this->NPC_GameUtilityData = NULL;
    this->MPC_GameUtilityData = NULL;
    this->MPC_GameUtilityData_SDF = NULL;
    this->UseWEFM = false;
    this->WEFMManager = NULL;
    this->WEFMNPC = NULL;
    this->WEFMMPC = NULL;
    this->WEFMVisualDebugFX = NULL;
    this->WEFM_RT2D = NULL;
}


