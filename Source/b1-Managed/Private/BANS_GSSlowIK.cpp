#include "BANS_GSSlowIK.h"

UBANS_GSSlowIK::UBANS_GSSlowIK() {
    this->SlowIKType = SlowIKType::None;
    this->SlowTime = 0.00f;
    this->SlowTime_Crit = 0.00f;
    this->ProtectGap = 0.00f;
}

void UBANS_GSSlowIK::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSlowIK::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSSlowIK::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


