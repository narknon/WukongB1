#include "BED_QuestNode_Timer.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_Timer::UBED_QuestNode_Timer() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
    this->CompletionTime = 1.00f;
    this->StepTime = 0.00f;
}

FString UBED_QuestNode_Timer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


