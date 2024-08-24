#include "BED_QuestNode_SwitchCameraGroup.h"

UBED_QuestNode_SwitchCameraGroup::UBED_QuestNode_SwitchCameraGroup() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->CameraGroupId = -1;
}

FString UBED_QuestNode_SwitchCameraGroup::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


