#include "BUS_ActionTriggerConfigComp.h"

UBUS_ActionTriggerConfigComp::UBUS_ActionTriggerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetActionType = TargetActionType::WakeUp;
    this->UseManualSelect = false;
    this->UseAreaSelect = false;
    this->bSelectUnitHasTarget = false;
    this->bSelectPassiveUnit = false;
}


