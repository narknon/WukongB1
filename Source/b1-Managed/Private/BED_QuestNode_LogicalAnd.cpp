#include "BED_QuestNode_LogicalAnd.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_LogicalAnd::UBED_QuestNode_LogicalAnd() {
    this->Category = TEXT("Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_QuestNode_LogicalAnd::CanUserAddInputInCS_Implementation() const {
    return false;
}


