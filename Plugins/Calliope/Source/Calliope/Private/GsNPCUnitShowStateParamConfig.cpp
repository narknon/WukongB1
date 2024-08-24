#include "GsNPCUnitShowStateParamConfig.h"

FGsNPCUnitShowStateParamConfig::FGsNPCUnitShowStateParamConfig() {
    this->bCanModify = false;
    this->ActualParam = EGsNPCShowState::Show;
    this->ModifyParam = EGsNPCShowState::Show;
    this->DefaultParam = EGsNPCShowState::Show;
    this->OutParam = EGsNPCShowState::Show;
}

