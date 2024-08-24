#include "BED_QuestNode_PlayerLockTrainDummyTarget.h"

UBED_QuestNode_PlayerLockTrainDummyTarget::UBED_QuestNode_PlayerLockTrainDummyTarget() {
    this->Category = TEXT("Auto Test");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_QuestNode_PlayerLockTrainDummyTarget::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


