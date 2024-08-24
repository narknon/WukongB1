#include "BUI_DraggableV2.h"

UBUI_DraggableV2::UBUI_DraggableV2() {
}

void UBUI_DraggableV2::Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) {
}

FEventReply UBUI_DraggableV2::OnMouseMove_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UBUI_DraggableV2::OnMouseLeave_Implementation(const FPointerEvent& MouseEvent) {
}

FEventReply UBUI_DraggableV2::OnMouseButtonUp_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

void UBUI_DraggableV2::OnDragCancelled_Implementation(const FPointerEvent& MouseEvent, UDragDropOperation* Operation) {
}

FEventReply UBUI_DraggableV2::OnMouseButtonDown_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}

FEventReply UBUI_DraggableV2::OnPreviewMouseButtonDown_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}


