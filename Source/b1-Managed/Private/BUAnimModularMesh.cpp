#include "BUAnimModularMesh.h"

UBUAnimModularMesh::UBUAnimModularMesh() {
    this->LoopAnimation = NULL;
    this->bStopCopyPose = false;
    this->MappedSpeed = 0.00f;
    this->SpeedToInertiaScale = 0.00f;
    this->MinInertiaFactor = 0.00f;
}

void UBUAnimModularMesh::BlueprintInitializeAnimation_Implementation() {
}

void UBUAnimModularMesh::BlueprintThreadSafeUpdateAnimation_Implementation(float DeltaTime) {
}


