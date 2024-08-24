#include "BANS_GSCameraArmLocationZCurve.h"

UBANS_GSCameraArmLocationZCurve::UBANS_GSCameraArmLocationZCurve() {
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.00f;
}

void UBANS_GSCameraArmLocationZCurve::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSCameraArmLocationZCurve::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


