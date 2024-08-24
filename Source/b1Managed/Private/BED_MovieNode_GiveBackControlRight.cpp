#include "BED_MovieNode_GiveBackControlRight.h"

UBED_MovieNode_GiveBackControlRight::UBED_MovieNode_GiveBackControlRight() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->CameraBlendOutTime = 2.00f;
    this->CameraBlendOutFunction = VTBlend_EaseInOut;
    this->CameraBlendOutFuncExp = 1.50f;
}


