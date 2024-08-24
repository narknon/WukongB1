#include "BANS_GSCamArmLengthCurve.h"

UBANS_GSCamArmLengthCurve::UBANS_GSCamArmLengthCurve() {
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.00f;
}

void UBANS_GSCamArmLengthCurve::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSCamArmLengthCurve::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSCamArmLengthCurve::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


