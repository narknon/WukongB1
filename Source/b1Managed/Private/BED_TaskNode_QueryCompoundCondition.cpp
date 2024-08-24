#include "BED_TaskNode_QueryCompoundCondition.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_QueryCompoundCondition::UBED_TaskNode_QueryCompoundCondition() {
    this->Category = TEXT("Query");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->ConditionRelation = ConditionalRelation::And;
    this->bReverseCondition = false;
}

FString UBED_TaskNode_QueryCompoundCondition::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


