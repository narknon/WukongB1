#include "BED_QuestNode_SetPlayerRebirthPoint.h"

UBED_QuestNode_SetPlayerRebirthPoint::UBED_QuestNode_SetPlayerRebirthPoint() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->RebirthPointId = 0;
}

FString UBED_QuestNode_SetPlayerRebirthPoint::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


