#include "BED_ProcessStateNode_ObserveSequence.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_ObserveSequence::UBED_ProcessStateNode_ObserveSequence() {
    this->Category = TEXT("Observe");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(4);
    this->SequenceID = 0;
    this->SuccessLimit = 1;
}

FString UBED_ProcessStateNode_ObserveSequence::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


