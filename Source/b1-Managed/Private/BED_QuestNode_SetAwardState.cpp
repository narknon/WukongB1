#include "BED_QuestNode_SetAwardState.h"

UBED_QuestNode_SetAwardState::UBED_QuestNode_SetAwardState() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->EventID = 0;
    this->Distance = 0;
    this->CenterDistance = 0;
    this->bPlayerAsObserveUnit = false;
}

FString UBED_QuestNode_SetAwardState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


