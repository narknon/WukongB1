#include "GsNPCUnitBuffParamConfig.h"

FGsNPCUnitBuffParamConfig::FGsNPCUnitBuffParamConfig() {
    this->bCanModify = false;
    this->ActualParam = EGsNPCBuffState::Add;
    this->ModifyParam = EGsNPCBuffState::Add;
    this->DefaultParam = EGsNPCBuffState::Add;
    this->OutParam = EGsNPCBuffState::Add;
}

