#include "BED_TaskNode_ExecutionSequence.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_ExecutionSequence::UBED_TaskNode_ExecutionSequence() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_TaskNode_ExecutionSequence::CanUserAddOutputInCS_Implementation() const {
    return false;
}


