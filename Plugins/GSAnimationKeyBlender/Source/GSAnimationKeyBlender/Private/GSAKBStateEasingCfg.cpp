#include "GSAKBStateEasingCfg.h"

FGSAKBStateEasingCfg::FGSAKBStateEasingCfg() {
    this->EasingTime = 0.00f;
    this->DelayEasingTime = 0.00f;
    this->EasingFunc = EEasingFunc::Linear;
    this->EasingBlendExp = 0.00f;
    this->EasingSteps = 0;
    this->EnumValEasingType = EGSAnimKBEnumBoolEasing::GSEnd;
    this->BoolValEasingType = EGSAnimKBEnumBoolEasing::GSEnd;
}

