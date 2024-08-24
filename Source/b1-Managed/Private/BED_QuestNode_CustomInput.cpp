#include "BED_QuestNode_CustomInput.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_CustomInput::UBED_QuestNode_CustomInput() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_CustomInput::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


