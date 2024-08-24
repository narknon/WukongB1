#include "BED_TaskNode_PushTaskStageState.h"

UBED_TaskNode_PushTaskStageState::UBED_TaskNode_PushTaskStageState() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->IsPushToEnd = false;
    this->IsTriggerSaveArchive = false;
    this->PushTaskStageID = 0;
}

FString UBED_TaskNode_PushTaskStageState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


