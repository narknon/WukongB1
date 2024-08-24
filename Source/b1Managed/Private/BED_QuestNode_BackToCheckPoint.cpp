#include "BED_QuestNode_BackToCheckPoint.h"

UBED_QuestNode_BackToCheckPoint::UBED_QuestNode_BackToCheckPoint() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_BackToCheckPoint::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


