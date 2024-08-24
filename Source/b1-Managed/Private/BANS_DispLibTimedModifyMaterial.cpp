#include "BANS_DispLibTimedModifyMaterial.h"

UBANS_DispLibTimedModifyMaterial::UBANS_DispLibTimedModifyMaterial() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->EditorActive = false;
    this->Delay = 0.00f;
    this->DelayTimeAfterStop = 0.00f;
    this->Template = NULL;
    this->InheriParamsMode = DispLibMaterialParamsInheritMode::NoInherit;
    this->PausePriority = 0;
    this->EndStagePriority = 0;
    this->ModMatPriority = 0;
    this->ModMatEndStagePriority = 0;
}

void UBANS_DispLibTimedModifyMaterial::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_DispLibTimedModifyMaterial::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


