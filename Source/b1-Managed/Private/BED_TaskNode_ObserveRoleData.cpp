#include "BED_TaskNode_ObserveRoleData.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_ObserveRoleData::UBED_TaskNode_ObserveRoleData() {
    this->Category = TEXT("Observe");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
    this->ObserveMinSuccessConditionNum = 1;
}

FString UBED_TaskNode_ObserveRoleData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


