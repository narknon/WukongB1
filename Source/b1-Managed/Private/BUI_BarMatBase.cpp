#include "BUI_BarMatBase.h"

UBUI_BarMatBase::UBUI_BarMatBase() {
    this->LineMarkScaleCurve = NULL;
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
    this->DebuffTweenDelay = 0.00f;
    this->DebuffTweenDuration = 0.00f;
    this->DebuffTweenFuncType = EEasingFunc::Linear;
}


