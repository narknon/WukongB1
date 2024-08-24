#include "BED_QuestNode_AiConversation.h"

UBED_QuestNode_AiConversation::UBED_QuestNode_AiConversation() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bUseLocalPlayerAsCaster = false;
}

FString UBED_QuestNode_AiConversation::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


