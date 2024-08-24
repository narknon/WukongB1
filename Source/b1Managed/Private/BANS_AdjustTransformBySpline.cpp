#include "BANS_AdjustTransformBySpline.h"

UBANS_AdjustTransformBySpline::UBANS_AdjustTransformBySpline() {
    this->bShowDebug = false;
    this->RotateType = TransformBySplineRotateType::RotateToSplineTangentByTargetSide;
}

void UBANS_AdjustTransformBySpline::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_AdjustTransformBySpline::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_AdjustTransformBySpline::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


