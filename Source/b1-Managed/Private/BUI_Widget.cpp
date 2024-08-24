#include "BUI_Widget.h"

UBUI_Widget::UBUI_Widget() {
    this->IsNewConfig = false;
    this->IsInstance = false;
    this->GSDefaultTickType = EGSTickType::NotSet;
    this->CurTickType = EGSTickType::NotSet;
    this->IsRegTick = false;
    this->OnShowAudioEvent = NULL;
    this->OnHideAudioEvent = NULL;
    this->WidgetMPlayer = NULL;
}

void UBUI_Widget::GSAnimKeyToState(const FString& AnimName, const FString& TargetState, bool IsForce, float InStateDelayEasingTime, float InStateOverideEasingTime) {
}

void UBUI_Widget::Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) {
}

void UBUI_Widget::WoodTestAnimKeyState(const FString& AnimName, const FString& TargetState, float InStateDelayEasingTime, float InStateOverideEasingTime, bool IsForce) {
}

FEventReply UBUI_Widget::OnKeyUp_Implementation(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

void UBUI_Widget::OnGSOnListItemObjectSet(UObject* ListItemObject) {
}

void UBUI_Widget::Destruct_Implementation() {
}

FEventReply UBUI_Widget::OnKeyDown_Implementation(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

void UBUI_Widget::OnAnimationSequenceEvent(UWidgetAnimation* Animation, const FString& EventName) {
}

void UBUI_Widget::Construct_Implementation() {
}

FEventReply UBUI_Widget::OnMouseWheel_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UBUI_Widget::PreConstruct_Implementation(bool IsDesignTime) {
}

void UBUI_Widget::OnInitialized_Implementation() {
}

void UBUI_Widget::OnFocusChanging_Implementation(const FFocusEvent& InFocusEvent) {
}

FEventReply UBUI_Widget::OnPreviewKeyDown_Implementation(FGeometry MyGeometry, FKeyEvent InKeyEvent) {
    return FEventReply{};
}

void UBUI_Widget::OnAddedToFocusPath_Implementation(FFocusEvent InFocusEvent) {
}

FEventReply UBUI_Widget::OnAnalogValueChanged_Implementation(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent) {
    return FEventReply{};
}

void UBUI_Widget::OnRemovedFromFocusPath_Implementation(FFocusEvent InFocusEvent) {
}


