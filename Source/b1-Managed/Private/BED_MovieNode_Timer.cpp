#include "BED_MovieNode_Timer.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_Timer::UBED_MovieNode_Timer() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->CompletionTime = 1.00f;
    this->StepTime = 0.00f;
}

FString UBED_MovieNode_Timer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


