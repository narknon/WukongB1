#include "BED_QuestNode_AddBuff.h"

UBED_QuestNode_AddBuff::UBED_QuestNode_AddBuff() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BuffLayer = 1;
    this->BuffDuration = 0;
    this->BuffID = 0;
    this->bPlayerAsObserveUnit = false;
}

FString UBED_QuestNode_AddBuff::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


