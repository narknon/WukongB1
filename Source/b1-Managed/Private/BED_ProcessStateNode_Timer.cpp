#include "BED_ProcessStateNode_Timer.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessStateNode_Timer::UBED_ProcessStateNode_Timer() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
    this->CompletionTime = 1.00f;
    this->StepTime = 0.00f;
}

FString UBED_ProcessStateNode_Timer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


