#include "GSInputActionIcon.h"

UGSInputActionIcon::UGSInputActionIcon() {
    this->SpeedRatioOnStopHold = 1.00f;
    this->InputIconTexture = NULL;
    this->InputAction = NULL;
    this->IconShowType = EGSInputIconShowType::Both;
    this->bShouldApplyOffset = true;
    this->IconScale = 1.00f;
    this->ComboIconOnlyShowOneType = EGSComboOnlyShowOneType::Both;
}

void UGSInputActionIcon::StopHold() {
}

void UGSInputActionIcon::SetPercent(const float InPercent) {
}

void UGSInputActionIcon::SetInputAction(UInputAction* NewInputAction) {
}

void UGSInputActionIcon::Reset() {
}

void UGSInputActionIcon::OpenPercentBg(bool bOpen) {
}

void UGSInputActionIcon::BeginHold(const float InTotalTime) {
}


