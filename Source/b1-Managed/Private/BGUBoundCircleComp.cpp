#include "BGUBoundCircleComp.h"

UBGUBoundCircleComp::UBGUBoundCircleComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 600.00f;
    this->DragSpeed = 0.20f;
    this->BackSpeed = 1.00f;
    this->TimeStep = 0.02f;
    this->DrawDebug = false;
}

void UBGUBoundCircleComp::AddDragVec(FVector DragVectorInWorld, float DragFactor) {
}

void UBGUBoundCircleComp::SetGSEnabled(bool IsEnabled) {
}

void UBGUBoundCircleComp::GSTmpBeginPlay() {
}

void UBGUBoundCircleComp::BeginPlayGS_Implementation() {
}

void UBGUBoundCircleComp::TickComponentGS_Implementation(float DeltaTime) {
}


