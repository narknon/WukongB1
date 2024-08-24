#include "BUAnimWheel.h"

UBUAnimWheel::UBUAnimWheel() {
    this->ASIdle = NULL;
    this->ASSpeedUp = NULL;
    this->ASSpeedDown = NULL;
    this->ASMoveLoop = NULL;
    this->MovePlayRate = 0.00f;
    this->BSRotationAdditive = NULL;
    this->BSRotationAdditiveX = 0.00f;
    this->bIdleToSpeedUp = false;
    this->bLoopToIdle = false;
    this->bIdleToLoop = false;
}

void UBUAnimWheel::BlueprintUpdateAnimation_Implementation(float DeltaTimeX) {
}


