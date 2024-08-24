#include "BP_ActorTouchDraggingController.h"

ABP_ActorTouchDraggingController::ABP_ActorTouchDraggingController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->traceChnl = TraceTypeQuery1;
}

void ABP_ActorTouchDraggingController::OnTick(float DeltaTime) {
}

void ABP_ActorTouchDraggingController::OnTouchPressed() {
}

void ABP_ActorTouchDraggingController::OnTouchReleased() {
}

void ABP_ActorTouchDraggingController::ReceiveBeginPlay_Implementation() {
}


