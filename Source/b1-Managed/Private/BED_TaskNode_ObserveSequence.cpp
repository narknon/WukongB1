#include "BED_TaskNode_ObserveSequence.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_ObserveSequence::UBED_TaskNode_ObserveSequence() {
    this->Category = TEXT("Observe");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(4);
    this->SequencePhase = SequencePhase::Finished;
    this->SuccessLimit = 1;
    this->SequenceID = 0;
}

FString UBED_TaskNode_ObserveSequence::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


