#include "BED_BehaviorNode_EnterState.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_EnterState::UBED_BehaviorNode_EnterState() {
    this->Category = TEXT("FSMState");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode_EnterState::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_EnterState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


