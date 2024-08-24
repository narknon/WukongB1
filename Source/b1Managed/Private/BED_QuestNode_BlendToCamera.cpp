#include "BED_QuestNode_BlendToCamera.h"

UBED_QuestNode_BlendToCamera::UBED_QuestNode_BlendToCamera() {
    this->Category = TEXT("Notifies");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bPlayerAsViewTarget = false;
    this->BlendTime = 0.00f;
    this->BlendFunc = VTBlend_Linear;
    this->BlendExp = 0.00f;
    this->bLockOutgoing = false;
}

FString UBED_QuestNode_BlendToCamera::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


