#include "BED_ProcessStateNode_LogicalOr.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_LogicalOr::UBED_ProcessStateNode_LogicalOr() {
    this->Category = TEXT("Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_ProcessStateNode_LogicalOr::CanUserAddInputInCS_Implementation() const {
    return false;
}


