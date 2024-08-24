#include "BED_QuestNode_LogicalOr.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_LogicalOr::UBED_QuestNode_LogicalOr() {
    this->Category = TEXT("Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_QuestNode_LogicalOr::CanUserAddInputInCS_Implementation() const {
    return false;
}


