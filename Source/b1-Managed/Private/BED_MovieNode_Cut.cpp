#include "BED_MovieNode_Cut.h"

UBED_MovieNode_Cut::UBED_MovieNode_Cut() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bUseCinematicCamera = false;
    this->bUseRail = false;
    this->bUseCrane = false;
    this->InCameraBlendTime = 2.00f;
    this->InCameraBlendFunction = VTBlend_EaseInOut;
    this->InCameraBlendFactor = 1.50f;
    this->bLoopPlay = false;
}

FString UBED_MovieNode_Cut::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


