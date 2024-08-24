#include "WBP_ActorDraggingController.h"

UWBP_ActorDraggingController::UWBP_ActorDraggingController() {
    this->dragDropOperationTemplate = NULL;
    this->RotateSpeed = 0.00f;
    this->dragBeginPos = 0.00f;
}

bool UWBP_ActorDraggingController::OnDragOverCallback(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation) {
    return false;
}

void UWBP_ActorDraggingController::OnDragDetectedCallback(FGeometry MyGeometry, FPointerEvent PointerEvent) {
}

void UWBP_ActorDraggingController::OnDragCancelledCallback(FPointerEvent PointerEvent, UDragDropOperation* Operation) {
}

bool UWBP_ActorDraggingController::OnDragOver_Implementation(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation) {
    return false;
}

FEventReply UWBP_ActorDraggingController::OnMouseButtonDownCallback(FGeometry MyGeometry, FPointerEvent MouseEvent) {
    return FEventReply{};
}

void UWBP_ActorDraggingController::OnDragDetected_Implementation(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation) {
}

void UWBP_ActorDraggingController::OnDragCancelled_Implementation(const FPointerEvent& PointerEvent, UDragDropOperation* Operation) {
}

FEventReply UWBP_ActorDraggingController::OnMouseButtonDown_Implementation(FGeometry MyGeometry, const FPointerEvent& MouseEvent) {
    return FEventReply{};
}


