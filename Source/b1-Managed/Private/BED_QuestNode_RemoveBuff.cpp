#include "BED_QuestNode_RemoveBuff.h"

UBED_QuestNode_RemoveBuff::UBED_QuestNode_RemoveBuff() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BuffLayer = 1;
    this->BuffID = 0;
    this->bPlayerAsObserveUnit = false;
}

FString UBED_QuestNode_RemoveBuff::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


