#include "BUI_Button.h"

UBUI_Button::UBUI_Button() {
    this->GSTextColorType = TextColorType::Normal;
    this->GSButtonUIStat = ButtonUIStat::Normal;
    this->GSParentButtonUIStat = ButtonUIStat::None;
    this->GSButtonStat = ButtonStat::Normal;
    this->Parent = NULL;
    this->AnimReverseSpeed = 3.00f;
    this->IsSelectedUseLayer = false;
    this->MouseMoveHoverType = MouseMoveHoverType::Default;
    this->IsMouseEnterSetFocus = false;
    this->IsFocusSetActive = false;
    this->IsActiveUseInput = false;
    this->IsTopUseInput = false;
    this->KeyBoardShowFocusType = KeyBoardShowFocusType::Hide;
    this->FocusAudioEvent = NULL;
    this->HoveredAudioEvent = NULL;
    this->ActiveAudioEvent = NULL;
    this->ClickAudioEvent = NULL;
    this->LockClickAudioEvent = NULL;
    this->MouseStayEventTime = 0.20f;
    this->UseAlphaTest = false;
    this->Debug = false;
}

bool UBUI_Button::SetFocusOn(FocusReason Reason) {
    return false;
}

FEventReply UBUI_Button::OnKeyUp_Implementation(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

void UBUI_Button::SetIsMouseEnterSetFocus(bool InIsMouseEnterSetFocus) {
}

bool UBUI_Button::GetIsMouseEnterSetFocus() {
    return false;
}

UWidget* UBUI_Button::OnCustomWidgetNavigation(EUINavigation NewNavigation) {
    return NULL;
}

FEventReply UBUI_Button::OnKeyDown_Implementation(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

FEventReply UBUI_Button::OnMouseMove_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UBUI_Button::OnMouseLeave_Implementation(const FPointerEvent& MouseEvent) {
}

void UBUI_Button::OnMouseEnter_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
}

FEventReply UBUI_Button::OnMouseButtonUp_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

FEventReply UBUI_Button::OnPreviewKeyDown_Implementation(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

FEventReply UBUI_Button::OnMouseButtonDown_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UBUI_Button::OnAddedToFocusPath_Implementation(FFocusEvent InFocusEvent) {
}

FEventReply UBUI_Button::OnAnalogValueChanged_Implementation(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent) {
    return FEventReply{};
}

FEventReply UBUI_Button::OnMouseButtonDoubleClick_Implementation(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent) {
    return FEventReply{};
}


