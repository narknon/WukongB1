#include "BED_QuestNode_PlayerUseItem.h"

UBED_QuestNode_PlayerUseItem::UBED_QuestNode_PlayerUseItem() {
    this->Category = TEXT("Auto Test");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->ItemId = 0;
}

FString UBED_QuestNode_PlayerUseItem::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


