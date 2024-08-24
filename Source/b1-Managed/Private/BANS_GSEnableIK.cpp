#include "BANS_GSEnableIK.h"

UBANS_GSEnableIK::UBANS_GSEnableIK() {
    this->bEnableIK = false;
    this->bEnableForefootIK = false;
}

void UBANS_GSEnableIK::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSEnableIK::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


