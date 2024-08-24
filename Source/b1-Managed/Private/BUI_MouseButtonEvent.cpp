#include "BUI_MouseButtonEvent.h"

UBUI_MouseButtonEvent::UBUI_MouseButtonEvent() : UUserWidget(FObjectInitializer::Get()) {
}

void UBUI_MouseButtonEvent::Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) {
}

FEventReply UBUI_MouseButtonEvent::OnMouseMove_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UBUI_MouseButtonEvent::OnMouseEnter_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
}

void UBUI_MouseButtonEvent::OnMouseLeave_Implementation(const FPointerEvent& MouseEvent) {
}

FEventReply UBUI_MouseButtonEvent::OnMouseButtonUp_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

FEventReply UBUI_MouseButtonEvent::OnMouseButtonDown_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UBUI_MouseButtonEvent::OnUserWidgetAnimationSequenceEvent(int32 Param) {
}


