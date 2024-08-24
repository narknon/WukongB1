#include "BUS_GateStateMachineConfigComp.h"

UBUS_GateStateMachineConfigComp::UBUS_GateStateMachineConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartWithClosed = false;
    this->ManualStateControl = false;
    this->GateStateMachineType = GateStateMachineType::None;
}


