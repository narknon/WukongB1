#include "BAN_GSSimulatePhysics.h"

UBAN_GSSimulatePhysics::UBAN_GSSimulatePhysics() {
    this->PhysicsSimulateEnable = false;
    this->IncludeChildren = false;
}

void UBAN_GSSimulatePhysics::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


