#include "BANS_GSSlowTime_LifeSaving.h"
#include "EGsEnAnimNS.h"

UBANS_GSSlowTime_LifeSaving::UBANS_GSSlowTime_LifeSaving() {
    this->AnimNSType = EGsEnAnimNS::SlowTime;
}

void UBANS_GSSlowTime_LifeSaving::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


