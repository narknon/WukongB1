#include "BED_ProcessStateNode_ObserveActor.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_ObserveActor::UBED_ProcessStateNode_ObserveActor() {
    this->Category = TEXT("Observe");
    this->NodeStyle = ECalliopeNodeStyle::Condition;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(4);
    this->SuccessLimit = 0;
}

FString UBED_ProcessStateNode_ObserveActor::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


