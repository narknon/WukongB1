#include "BANS_GSCamPitchCurve.h"

UBANS_GSCamPitchCurve::UBANS_GSCamPitchCurve() {
    this->BlendInTime = 0.10f;
}

void UBANS_GSCamPitchCurve::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSCamPitchCurve::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSCamPitchCurve::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


