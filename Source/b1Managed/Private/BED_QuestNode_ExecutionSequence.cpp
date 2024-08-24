#include "BED_QuestNode_ExecutionSequence.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_ExecutionSequence::UBED_QuestNode_ExecutionSequence() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_QuestNode_ExecutionSequence::CanUserAddOutputInCS_Implementation() const {
    return false;
}


