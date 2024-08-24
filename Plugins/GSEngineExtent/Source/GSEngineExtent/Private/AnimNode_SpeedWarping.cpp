#include "AnimNode_SpeedWarping.h"

FAnimNode_SpeedWarping::FAnimNode_SpeedWarping() {
    this->SpeedWarpingAxisMode = EIKFootRootLocalAxis::NONE;
    this->SpeedScaling = 0.00f;
    this->PelvisAdjustmentAlpha = 0.00f;
    this->MaxIter = 0.00f;
    this->ClampIKUsingFKLeg = false;
}

