#include "BED_QuestNode_OlineScreenMsg.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_OlineScreenMsg::UBED_QuestNode_OlineScreenMsg() {
    this->Category = TEXT("Gameplay");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->EventID = 0;
}

FString UBED_QuestNode_OlineScreenMsg::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


