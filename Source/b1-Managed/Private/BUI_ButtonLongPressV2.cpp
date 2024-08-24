#include "BUI_ButtonLongPressV2.h"

UBUI_ButtonLongPressV2::UBUI_ButtonLongPressV2() {
    this->PressStartTime = 0.20f;
    this->PressTimeMax = 2.00f;
    this->CurPressTime = 0.00f;
    this->OverFadeOutTime = 0.50f;
    this->StartPressAudioEvent = NULL;
    this->StopPressAudioEvent = NULL;
    this->FinishPressAudioEvent = NULL;
    this->IsSpecial = false;
}


