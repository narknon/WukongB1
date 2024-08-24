#include "BANS_GSJumpToCeiling.h"

UBANS_GSJumpToCeiling::UBANS_GSJumpToCeiling() {
    this->HeightCurve = NULL;
    this->PitchCurve = NULL;
    this->MaxHeight = 0.00f;
    this->bJumpUp = false;
}

void UBANS_GSJumpToCeiling::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSJumpToCeiling::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSJumpToCeiling::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


