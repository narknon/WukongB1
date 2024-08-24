#include "BUAnim_PostProcess_Quadruped.h"

UBUAnim_PostProcess_Quadruped::UBUAnim_PostProcess_Quadruped() {
    this->IKSpinePitch = 0.00f;
    this->IKSpineRoll = 0.00f;
    this->IKSpineAlpha = 0.00f;
    this->LimbIKAlpha = 0.00f;
    this->EnableAttackIK = false;
}

void UBUAnim_PostProcess_Quadruped::BlueprintUpdateAnimation_Implementation(float DeltaTimeX) {
}

void UBUAnim_PostProcess_Quadruped::BlueprintInitializeAnimation_Implementation() {
}


