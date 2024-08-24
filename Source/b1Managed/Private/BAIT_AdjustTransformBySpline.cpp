#include "BAIT_AdjustTransformBySpline.h"

UBAIT_AdjustTransformBySpline::UBAIT_AdjustTransformBySpline() {
    this->bHint = false;
    this->bShowDebug = false;
    this->RotateType = TransformBySplineRotateType::RotateToSplineTangentByTargetSide;
    this->AdjustTime = 0.50f;
}


