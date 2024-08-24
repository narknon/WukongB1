#include "GSCameraSequencePlaySetting.h"

FGSCameraSequencePlaySetting::FGSCameraSequencePlaySetting() {
    this->RefRotatorType = ERefRotatorType::Zero;
    this->InCameraBlendType = ECameraBlendType::None;
    this->InCameraBlendSpeed = 0.00f;
    this->InCameraBlendTimeUseNotifyStateLength = false;
    this->InCameraBlendFuncType = VTBlend_Linear;
    this->InCameraBlendFuncExp = 0.00f;
    this->OutCameraBlendTime = 0.00f;
    this->OutCameraBlendFuncType = VTBlend_Linear;
    this->OutCameraBlendFuncExp = 0.00f;
}

