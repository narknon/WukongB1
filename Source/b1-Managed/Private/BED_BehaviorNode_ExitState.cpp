#include "BED_BehaviorNode_ExitState.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_ExitState::UBED_BehaviorNode_ExitState() {
    this->Category = TEXT("FSMState");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode_ExitState::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_ExitState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


