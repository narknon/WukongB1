#include "BED_DialogueNode_OnPlayerApproached.h"

UBED_DialogueNode_OnPlayerApproached::UBED_DialogueNode_OnPlayerApproached() {
    this->OutputPins.AddDefaulted(1);
    this->ResID = 0;
}

bool UBED_DialogueNode_OnPlayerApproached::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_DialogueNode_OnPlayerApproached::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


