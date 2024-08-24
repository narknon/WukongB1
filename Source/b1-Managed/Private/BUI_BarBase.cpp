#include "BUI_BarBase.h"

UBUI_BarBase::UBUI_BarBase() {
    this->OffsetFadeDuration = 0.20f;
    this->ProcBarTweenDelay = 0.10f;
    this->ProcBarTweenDuration = 0.20f;
    this->ProcBarTweenFuncType = EEasingFunc::EaseOut;
    this->MainBarTweenDelay = 0.00f;
    this->MainBarTweenDuration = 0.20f;
    this->MainBarTweenFuncType = EEasingFunc::EaseOut;
    this->MainBarIncTweenFuncType = EEasingFunc::Linear;
    this->IsIgnoreIncExTweenAnim = true;
    this->MainBarIncTweenLinearSpeed = 0.20f;
}


