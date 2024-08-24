#include "BUS_ParkourMoveComp.h"

UBUS_ParkourMoveComp::UBUS_ParkourMoveComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckParkourStartDistance = 0.00f;
    this->ParkourMaxHeight = 0.00f;
    this->ParkourMinHeight = 0.00f;
    this->RunStrideSpeedRate = 0.00f;
    this->SprintStrideSpeedRate = 0.00f;
    this->bEnableStrideDown = false;
}


