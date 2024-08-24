#include "GSProcBarV4.h"

UGSProcBarV4::UGSProcBarV4() {
    this->MainBar = NULL;
    this->MainBarTweenTime = 0.10f;
    this->MainBarTweenDelay = 0.00f;
    this->ProcBar = NULL;
    this->ProcBarTweenTime = 0.20f;
    this->ProcBarTweenDelay = 0.30f;
    this->MinProcShowPer = 0.01f;
    this->IncBar = NULL;
    this->IncBarIncTime = 0.20f;
    this->IncBarStopTime = 0.10f;
    this->IncBarBackTime = 0.30f;
    this->MinIncShowPer = 0.01f;
    this->FlashBar = NULL;
    this->FlashBarFadeDelay = 0.00f;
    this->FlashBarFadeTime = 0.40f;
    this->MinFlashShowPer = 0.01f;
    this->ShineBar = NULL;
    this->SweepBar = NULL;
}

void UGSProcBarV4::GSOnConstruct() {
}


