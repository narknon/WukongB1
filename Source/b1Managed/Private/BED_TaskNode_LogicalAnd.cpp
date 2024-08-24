#include "BED_TaskNode_LogicalAnd.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_LogicalAnd::UBED_TaskNode_LogicalAnd() {
    this->Category = TEXT("Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_TaskNode_LogicalAnd::CanUserAddInputInCS_Implementation() const {
    return false;
}


