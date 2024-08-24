#include "BED_BehaviorNode_RemoveBuff.h"

UBED_BehaviorNode_RemoveBuff::UBED_BehaviorNode_RemoveBuff() {
    this->InputPins.AddDefaulted(1);
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->bTriggerRemoveEffect = true;
}

FString UBED_BehaviorNode_RemoveBuff::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


