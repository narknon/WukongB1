#include "BGP_PlayerCameraManagerCS.h"

ABGP_PlayerCameraManagerCS::ABGP_PlayerCameraManagerCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
}

void ABGP_PlayerCameraManagerCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGP_PlayerCameraManagerCS::UpdateCameraCS_Implementation(float DeltaTime) {
}

void ABGP_PlayerCameraManagerCS::SetViewTargetCS_Implementation(AActor* NewViewTarget, FViewTargetTransitionParams TransitionParams) {
}

void ABGP_PlayerCameraManagerCS::OnBlendCompleteCS_Implementation() {
}

void ABGP_PlayerCameraManagerCS::OnViewTargetChangedCS_Implementation(APlayerController* PC, AActor* OldViewTarget, AActor* NewViewTarget) {
}


