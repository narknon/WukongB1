#include "GSProcBar.h"

UGSProcBar::UGSProcBar() {
    this->MainBarTweenTime = 0.10f;
    this->MainBarTweenDelay = 0.00f;
    this->UseProc = false;
    this->ProcBarTweenTime = 0.20f;
    this->ProcBarTweenDelay = 0.30f;
    this->MinProcShowPer = 0.01f;
    this->UseInc = false;
    this->IncBarIncTime = 0.20f;
    this->IncBarStopTime = 0.10f;
    this->IncBarBackTime = 0.30f;
    this->MinIncShowPer = 0.01f;
    this->UseFlash = false;
    this->FlashBarFadeDelay = 0.00f;
    this->FlashBarFadeTime = 0.40f;
    this->MinFlashShowPer = 0.01f;
    this->UseSizeScale = false;
    this->OrgMaxLength = 0.00f;
    this->NewMaxLength = 0.00f;
    this->CurMaxLength = 0.00f;
    this->MaxIncPercent = 0.00f;
    this->MaxIncNormalTime = 0.50f;
    this->DefaulValueType = DefaulValueType::Percent;
    this->UseWarnState = false;
    this->WarnState = WarnState::None;
    this->WarnStateBlock = WarnStateBlock::UnBlock;
    this->DangerStatePercent = 0.00f;
    this->OnceWarnPercent = 0.00f;
}

void UGSProcBar::SetMaxIncPercent(float InMaxIncPercent) {
}


