#include "BUS_SplineFlyMoveTriggerConfigComp.h"

UBUS_SplineFlyMoveTriggerConfigComp::UBUS_SplineFlyMoveTriggerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnlyTransitionPlayerCanTrigger = false;
    this->IsPlayerObserveMode = false;
    this->AutoEnable = false;
    this->TraceVelocityCameraSpeedRate = 0.00f;
    this->bDestoryControlledUnitInActived = false;
}


