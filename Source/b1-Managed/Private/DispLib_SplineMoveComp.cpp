#include "DispLib_SplineMoveComp.h"

UDispLib_SplineMoveComp::UDispLib_SplineMoveComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProgressCurve = NULL;
    this->Time = 0.00f;
}

void UDispLib_SplineMoveComp::BeginPlayInCS_Implementation() {
}

void UDispLib_SplineMoveComp::TickComponentInCS_Implementation(float DeltaTime) {
}


