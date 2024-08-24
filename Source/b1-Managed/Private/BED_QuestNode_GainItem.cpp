#include "BED_QuestNode_GainItem.h"

UBED_QuestNode_GainItem::UBED_QuestNode_GainItem() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ItemId = -1;
    this->Count = 0;
}

FString UBED_QuestNode_GainItem::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


