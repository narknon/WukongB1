#include "BED_QuestNode_GamePass.h"

UBED_QuestNode_GamePass::UBED_QuestNode_GamePass() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_GamePass::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


