#include "BED_QuestNode_SetCameraTransform.h"

UBED_QuestNode_SetCameraTransform::UBED_QuestNode_SetCameraTransform() {
    this->Category = TEXT("Gameplay");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bCineCamera = false;
}


