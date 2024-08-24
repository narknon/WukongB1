#include "BED_ProcessStateNode_ObserveRoleData.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_ObserveRoleData::UBED_ProcessStateNode_ObserveRoleData() {
    this->Category = TEXT("Observe");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
    this->ObserveMinSuccessConditionNum = 1;
}

FString UBED_ProcessStateNode_ObserveRoleData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


