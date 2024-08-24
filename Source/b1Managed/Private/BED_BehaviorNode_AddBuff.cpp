#include "BED_BehaviorNode_AddBuff.h"

UBED_BehaviorNode_AddBuff::UBED_BehaviorNode_AddBuff() {
    this->InputPins.AddDefaulted(1);
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->BuffDuration = 0;
}

FString UBED_BehaviorNode_AddBuff::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


