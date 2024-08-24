#include "BED_TaskNode_GamePass.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_GamePass::UBED_TaskNode_GamePass() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_TaskNode_GamePass::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


