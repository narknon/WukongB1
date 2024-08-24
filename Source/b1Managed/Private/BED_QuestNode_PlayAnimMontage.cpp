#include "BED_QuestNode_PlayAnimMontage.h"

UBED_QuestNode_PlayAnimMontage::UBED_QuestNode_PlayAnimMontage() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_PlayAnimMontage::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


