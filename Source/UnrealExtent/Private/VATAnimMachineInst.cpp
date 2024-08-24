#include "VATAnimMachineInst.h"

AVATAnimMachineInst::AVATAnimMachineInst(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimClipsConfig = NULL;
    this->DebugAnimProgress = -1.00f;
    this->WindParamLerpSpeed = 1.20f;
    this->bLerpWindDirection = false;
    this->bLerpWindIntensity = false;
}

void AVATAnimMachineInst::UpdateWindIntensity(float InWindIntensity) {
}

void AVATAnimMachineInst::UpdateWindDirection(FVector2D InWindDirection) {
}

void AVATAnimMachineInst::UpdateBlendRatio(float InBlendRatio) {
}

void AVATAnimMachineInst::UpdateAnimSpeed(float InPlaySpeed) {
}

void AVATAnimMachineInst::UpdateAnimProgress(float InAnimProgress) {
}

void AVATAnimMachineInst::StopVATAnim() {
}

void AVATAnimMachineInst::PlayVATAnim() {
}

void AVATAnimMachineInst::InitVATAnimMachine() {
}


