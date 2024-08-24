#include "BANS_GSSlowTime.h"
#include "EGsEnAnimNS.h"

UBANS_GSSlowTime::UBANS_GSSlowTime() {
    this->AnimNSType = EGsEnAnimNS::SlowTime;
}

void UBANS_GSSlowTime::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


