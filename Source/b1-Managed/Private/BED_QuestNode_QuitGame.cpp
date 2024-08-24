#include "BED_QuestNode_QuitGame.h"

UBED_QuestNode_QuitGame::UBED_QuestNode_QuitGame() {
    this->Category = TEXT("Auto Test");
    this->InputPins.AddDefaulted(1);
}

FString UBED_QuestNode_QuitGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


