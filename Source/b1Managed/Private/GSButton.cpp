#include "GSButton.h"

UGSButton::UGSButton() {
    this->ClickMethod = EButtonClickMethod::PreciseClick;
    this->TouchMethod = EButtonTouchMethod::PreciseTap;
    this->PressMethod = EButtonPressMethod::ButtonRelease;
    this->IsFocusable = false;
    this->PressedMask = NULL;
    this->HoveredWidget = NULL;
    this->FocusedWidget = NULL;
    this->RootCon = NULL;
    this->DurationTime = 0.07f;
    this->PressedScale = 0.97f;
    this->ClickAudioEvent = NULL;
    this->FocusAudioEvent = NULL;
    this->HoveredAudioEvent = NULL;
}

void UGSButton::GSOnPressed() {
}

void UGSButton::GSOnClicked() {
}

void UGSButton::GSOnHovered() {
}

void UGSButton::GSOnFocused(FFocusEvent FocusEvent) {
}

void UGSButton::GSOnReleased() {
}

void UGSButton::GSOnUnhovered() {
}

void UGSButton::GSOnConstruct() {
}

void UGSButton::GSOnLostFocused(FFocusEvent FocusEvent) {
}


