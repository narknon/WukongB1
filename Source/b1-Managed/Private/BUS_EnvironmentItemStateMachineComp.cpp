#include "BUS_EnvironmentItemStateMachineComp.h"

UBUS_EnvironmentItemStateMachineComp::UBUS_EnvironmentItemStateMachineComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableBoxOverlaping = false;
    this->TriggerUnitFilter = TriggerUnitFilter::WuKongOnly;
    this->TriggerRange = 0.00f;
    this->bCanTriggerRepeatedly = false;
    this->SpecifiedResID = 0;
}


