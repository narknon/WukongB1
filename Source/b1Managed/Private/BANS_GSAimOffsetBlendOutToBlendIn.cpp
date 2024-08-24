#include "BANS_GSAimOffsetBlendOutToBlendIn.h"

UBANS_GSAimOffsetBlendOutToBlendIn::UBANS_GSAimOffsetBlendOutToBlendIn() {
    this->BlendOutTime = 0.00f;
    this->BlendInTime = 0.00f;
}

void UBANS_GSAimOffsetBlendOutToBlendIn::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAimOffsetBlendOutToBlendIn::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


