#include "BED_BehaviorNode_SimpleState.h"

UBED_BehaviorNode_SimpleState::UBED_BehaviorNode_SimpleState() {
    this->InputPins.AddDefaulted(1);
    this->SimpleState = EBGUSimpleState::Normal;
    this->bAdd = true;
}

FString UBED_BehaviorNode_SimpleState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


