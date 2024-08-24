#include "BAN_GSSplineFlyMove.h"

UBAN_GSSplineFlyMove::UBAN_GSSplineFlyMove() {
    this->bEnableSplineFlyMove = false;
    this->SpeedRateType = EAIMoveSpeedType::JOG;
    this->TraceVelocityCameraSpeedRate = 0.00f;
}

void UBAN_GSSplineFlyMove::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSSplineFlyMove::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


