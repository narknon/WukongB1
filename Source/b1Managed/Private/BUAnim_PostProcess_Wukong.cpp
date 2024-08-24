#include "BUAnim_PostProcess_Wukong.h"

UBUAnim_PostProcess_Wukong::UBUAnim_PostProcess_Wukong() {
    this->Alpha_FBIK_StandBar = 0.00f;
    this->SlowIK_Alpha = 0.00f;
    this->SlowIK_Enable = false;
    this->SlowIKType = SlowIKType::None;
}

void UBUAnim_PostProcess_Wukong::BlueprintUpdateAnimation_Implementation(float DeltaTimeX) {
}

void UBUAnim_PostProcess_Wukong::BlueprintInitializeAnimation_Implementation() {
}


