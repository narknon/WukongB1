#include "BGW_StaminaConfig.h"

UBGW_StaminaConfig::UBGW_StaminaConfig() {
    this->StaminaMI = NULL;
    this->StaminaMPC = NULL;
    this->StaminaRecoverCurve1 = NULL;
    this->StaminaRecoverCurveLength1 = 0.00f;
    this->StaminaRecoverCurve2 = NULL;
    this->StaminaRecoverCurveLength2 = 0.00f;
    this->StaminaCostCurve = NULL;
    this->StaminaCostCurveLength = 0.00f;
    this->StaminaWarnCurve = NULL;
    this->StaminaWarnCurveLength = 0.00f;
}


