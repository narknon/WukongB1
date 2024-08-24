#include "BGPPlayerController.h"
#include "BGUCrowdFollowingComponent.h"

ABGPPlayerController::ABGPPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->bGSIsLocalPlayerController = false;
    this->PathFollowingComponent = CreateDefaultSubobject<UBGUCrowdFollowingComponent>(TEXT("PathFollowingComponent"));
    this->bIsInTeleport = false;
}

void ABGPPlayerController::SetSpawnLocationCS(const FVector& NewLocation) {
}

void ABGPPlayerController::SetIsShouldPerformFullTickWhenPaused(bool IsShould) {
}




void ABGPPlayerController::OnPossessWithViewTargetBlend(APawn* InPawn, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, bool EnableBlendViewTarget) {
}


FVector ABGPPlayerController::GetSpawnLocationCS() {
    return FVector{};
}



AActor* ABGPPlayerController::GetPendingViewTarget() {
    return NULL;
}

UNetConnection* ABGPPlayerController::GetNetConnectionCS() {
    return NULL;
}

bool ABGPPlayerController::GetIsShouldPerformFullTickWhenPaused() {
    return false;
}

float ABGPPlayerController::GetCameraBlendTimeToGo() {
    return 0.0f;
}

UObject* ABGPPlayerController::GetCachedConsoleWorldContext() {
    return NULL;
}

FString ABGPPlayerController::GetCachedConsoleCommandCS() {
    return TEXT("");
}

void ABGPPlayerController::GetAudioListenerRotationCS(FRotator& OutRotation) const {
}

void ABGPPlayerController::GetAudioListenerPositionCS(FVector& OutLocation, FVector& OutFrontDir, FVector& OutRightDir) const {
}




