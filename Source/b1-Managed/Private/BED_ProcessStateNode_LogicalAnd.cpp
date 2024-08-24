#include "BED_ProcessStateNode_LogicalAnd.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_LogicalAnd::UBED_ProcessStateNode_LogicalAnd() {
    this->Category = TEXT("Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(3);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_ProcessStateNode_LogicalAnd::CanUserAddInputInCS_Implementation() const {
    return false;
}


