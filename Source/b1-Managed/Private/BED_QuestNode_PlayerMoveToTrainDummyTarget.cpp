#include "BED_QuestNode_PlayerMoveToTrainDummyTarget.h"

UBED_QuestNode_PlayerMoveToTrainDummyTarget::UBED_QuestNode_PlayerMoveToTrainDummyTarget() {
    this->Category = TEXT("Auto Test");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->MoveFinishDistance = 0.00f;
}

FString UBED_QuestNode_PlayerMoveToTrainDummyTarget::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


