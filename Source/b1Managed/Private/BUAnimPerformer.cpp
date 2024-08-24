#include "BUAnimPerformer.h"

UBUAnimPerformer::UBUAnimPerformer() {
    this->ABPSetting = NULL;
    this->EnableHeadAimOffset = false;
    this->HeadAimAlpha = 0.00f;
    this->AimOffsetMappingCurve = NULL;
    this->EnableEyeAimOffset = false;
    this->EyeAimAlpha = 0.00f;
    this->bCanSwitchBlinkAnim = false;
    this->AnimIdle = NULL;
    this->HeadAimOffset = NULL;
    this->EyeAimOffset = NULL;
}

void UBUAnimPerformer::GetRandomBlinkAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimPerformer::BlueprintUpdateAnimation_Implementation(float DeltaTimeX) {
}

void UBUAnimPerformer::BlueprintInitializeAnimation_Implementation() {
}


