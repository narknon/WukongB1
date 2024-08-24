#include "BED_ProcessStateNode_QueryCompoundCondition.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_QueryCompoundCondition::UBED_ProcessStateNode_QueryCompoundCondition() {
    this->Category = TEXT("Query");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->ConditionRelation = ConditionalRelation::And;
    this->bReverseCondition = false;
}

FString UBED_ProcessStateNode_QueryCompoundCondition::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


