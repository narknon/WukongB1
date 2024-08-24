#include "BUAnimQuadruped.h"

UBUAnimQuadruped::UBUAnimQuadruped() {
    this->AnimIdle = NULL;
    this->FinalABPMoveMode = EABPMoveMode::None;
    this->QuadrupedIKAlpha = 0.00f;
}

void UBUAnimQuadruped::BlueprintThreadSafeUpdateAnimation_Implementation(float DeltaTime) {
}


