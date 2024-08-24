#include "BED_BehaviorNode_ControlChildActor.h"

UBED_BehaviorNode_ControlChildActor::UBED_BehaviorNode_ControlChildActor() {
    this->InputPins.AddDefaulted(1);
}

FString UBED_BehaviorNode_ControlChildActor::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


