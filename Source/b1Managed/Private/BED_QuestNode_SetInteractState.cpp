#include "BED_QuestNode_SetInteractState.h"

UBED_QuestNode_SetInteractState::UBED_QuestNode_SetInteractState() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->InteractState = false;
    this->ByChallengeLevel = false;
    this->ChallengeId = 0;
    this->IngoreHideLogic = false;
}

FString UBED_QuestNode_SetInteractState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


