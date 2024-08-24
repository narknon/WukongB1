#include "BED_TaskNode_SaveArchive.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_SaveArchive::UBED_TaskNode_SaveArchive() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_TaskNode_SaveArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


