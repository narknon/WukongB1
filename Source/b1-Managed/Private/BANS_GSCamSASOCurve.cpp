#include "BANS_GSCamSASOCurve.h"

UBANS_GSCamSASOCurve::UBANS_GSCamSASOCurve() {
    this->SASOCurve = NULL;
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.00f;
}

void UBANS_GSCamSASOCurve::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSCamSASOCurve::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSCamSASOCurve::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


