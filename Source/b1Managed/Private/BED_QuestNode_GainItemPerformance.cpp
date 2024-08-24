#include "BED_QuestNode_GainItemPerformance.h"

UBED_QuestNode_GainItemPerformance::UBED_QuestNode_GainItemPerformance() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ItemId = -1;
    this->Count = 0;
}

FString UBED_QuestNode_GainItemPerformance::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


