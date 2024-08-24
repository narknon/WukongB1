#include "BAN_DispLibChangeUnitMaterial.h"

UBAN_DispLibChangeUnitMaterial::UBAN_DispLibChangeUnitMaterial() {
    this->Template = NULL;
    this->InheriParamsMode = DispLibMaterialParamsInheritMode::NoInherit;
}

void UBAN_DispLibChangeUnitMaterial::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


