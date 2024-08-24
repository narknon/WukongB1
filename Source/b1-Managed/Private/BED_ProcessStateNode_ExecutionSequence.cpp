#include "BED_ProcessStateNode_ExecutionSequence.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_ExecutionSequence::UBED_ProcessStateNode_ExecutionSequence() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_ProcessStateNode_ExecutionSequence::CanUserAddOutputInCS_Implementation() const {
    return false;
}


