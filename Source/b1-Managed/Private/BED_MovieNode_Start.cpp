#include "BED_MovieNode_Start.h"

UBED_MovieNode_Start::UBED_MovieNode_Start() {
    this->OutputPins.AddDefaulted(1);
    this->StartTimeSeconds = 0.00f;
    this->bUseCinematicCamera = false;
    this->bUseRail = false;
    this->bUseCrane = false;
    this->CameraBlendInTime = 2.00f;
    this->CameraBlendInFunction = VTBlend_EaseInOut;
    this->CameraBlendInFuncExp = 1.50f;
    this->bLoopPlay = false;
}

FString UBED_MovieNode_Start::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


