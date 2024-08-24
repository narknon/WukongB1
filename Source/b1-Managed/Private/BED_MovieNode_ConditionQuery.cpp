#include "BED_MovieNode_ConditionQuery.h"

UBED_MovieNode_ConditionQuery::UBED_MovieNode_ConditionQuery() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_MovieNode_ConditionQuery::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


