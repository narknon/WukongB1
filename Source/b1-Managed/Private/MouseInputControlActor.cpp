#include "MouseInputControlActor.h"

AMouseInputControlActor::AMouseInputControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->traceChnl = TraceTypeQuery1;
    this->sphereActor = NULL;
    this->VerticalOffset = 0.00f;
}

void AMouseInputControlActor::OnTouchPressed() {
}

void AMouseInputControlActor::ReceiveBeginPlay_Implementation() {
}


