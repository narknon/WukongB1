#include "BAN_DispLibModifyMaterial.h"

UBAN_DispLibModifyMaterial::UBAN_DispLibModifyMaterial() {
    this->EditorActive = false;
    this->Delay = 0.00f;
    this->Duration = 8.00f;
    this->DelayTimeAfterStop = 0.00f;
    this->Template = NULL;
    this->InheriParamsMode = DispLibMaterialParamsInheritMode::NoInherit;
    this->PausePriority = 0;
    this->EndStagePriority = 0;
    this->ModMatPriority = 0;
    this->ModMatEndStagePriority = 0;
}

void UBAN_DispLibModifyMaterial::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


