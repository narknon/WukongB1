#include "BED_MovieNode_PlayEnd.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_PlayEnd::UBED_MovieNode_PlayEnd() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
    this->CameraBlendOutTime = 2.00f;
    this->CameraBlendOutFunction = VTBlend_EaseInOut;
    this->CameraBlendOutFuncExp = 1.50f;
    this->BlendOutBeforeCamera = true;
    this->ResetSpringArmRotationWay = ResetSpringArmRotationWay::Reset2NearestRotation;
}

FString UBED_MovieNode_PlayEnd::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


