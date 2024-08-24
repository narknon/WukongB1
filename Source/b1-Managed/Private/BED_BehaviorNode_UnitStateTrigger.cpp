#include "BED_BehaviorNode_UnitStateTrigger.h"

UBED_BehaviorNode_UnitStateTrigger::UBED_BehaviorNode_UnitStateTrigger() {
    this->InputPins.AddDefaulted(1);
    this->UnitStateTrigger = EBUStateTrigger::None;
    this->Time = 0.00f;
}

FString UBED_BehaviorNode_UnitStateTrigger::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


