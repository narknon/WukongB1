#include "BED_FSMNode_Condition_PS_Transaction_TaskCondition.h"

UBED_FSMNode_Condition_PS_Transaction_TaskCondition::UBED_FSMNode_Condition_PS_Transaction_TaskCondition() {
    this->Category = TEXT("PS_Transaction Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_PS_Transaction_TaskCondition::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


