#include "BANS_GSCalcAMScale.h"
#include "EGsEnAnimNS.h"

UBANS_GSCalcAMScale::UBANS_GSCalcAMScale() {
    this->AnimNSType = EGsEnAnimNS::CalcAMScale;
    this->AMScaleAxis = EAMScaleRateAxis::AllByScaleRateAxisX;
    this->AMScaleType = EAMScaleType::ScaleForTarget;
    this->AMScaleMinRate = 0.00f;
    this->AMScaleMaxRate = 0.00f;
    this->AMScaleMoveOffset = 0.00f;
    this->AMScaleMoveOffsetZ = 0.00f;
    this->PureScaleValue = 0.00f;
    this->CachedDataID = 0;
    this->LandingTraceLength = 0.00f;
    this->AttackRangeLimit = false;
    this->DebugMode = false;
}

void UBANS_GSCalcAMScale::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

void UBANS_GSCalcAMScale::GSValidateInputCS_Implementation(AActor* Actor) const {
}

bool UBANS_GSCalcAMScale::GSAllowCrossSection_Implementation() const {
    return false;
}


