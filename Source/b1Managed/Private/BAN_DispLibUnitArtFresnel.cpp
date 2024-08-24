#include "BAN_DispLibUnitArtFresnel.h"

UBAN_DispLibUnitArtFresnel::UBAN_DispLibUnitArtFresnel() {
    this->EditorActive = false;
    this->UseUniversalUAF = false;
    this->UniversalUAFIndex = 1;
    this->CustomUAFDataAsset = NULL;
    this->Priority = 2;
    this->OverrideTime = 0.00f;
    this->OverrideSimpleProgrammedCurve = 0;
    this->OverrideFadeInTime = 0.00f;
    this->OverrideCommonTime = 0.00f;
    this->OverrideFadeOutTime = 0.00f;
    this->OverrideProgrammedPowerMax = 0.00f;
    this->OverrideOnePeriodTime = 0.00f;
    this->OverrideLoop = 0;
}

void UBAN_DispLibUnitArtFresnel::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


