#include "BED_QuestNode_SaveArchive.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_SaveArchive::UBED_QuestNode_SaveArchive() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_SaveArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


