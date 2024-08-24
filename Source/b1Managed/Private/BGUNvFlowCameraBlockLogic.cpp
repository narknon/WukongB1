#include "BGUNvFlowCameraBlockLogic.h"

UBGUNvFlowCameraBlockLogic::UBGUNvFlowCameraBlockLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraComp = NULL;
    this->ActorComp = NULL;
    this->CapsuleBlocker = NULL;
    this->CapsuleBlockerRaidusRate = 0.00f;
}

void UBGUNvFlowCameraBlockLogic::Init(USceneComponent* Cam, USceneComponent* Actor, UCapsuleComponent* Blocker) {
}

void UBGUNvFlowCameraBlockLogic::ReceiveTick_Implementation(float DeltaSeconds) {
}


