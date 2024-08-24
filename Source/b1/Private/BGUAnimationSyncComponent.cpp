#include "BGUAnimationSyncComponent.h"

UBGUAnimationSyncComponent::UBGUAnimationSyncComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerMasterComp = NULL;
    this->DummyMeshComp = NULL;
    this->DrivingComp = NULL;
    this->GuestActor = NULL;
    this->GuestMeshComp = NULL;
    this->GuestMontage = NULL;
}

void UBGUAnimationSyncComponent::OnSwitchSyncGuestTarget(AActor* NewGuest) {
}

void UBGUAnimationSyncComponent::OnRespectCollisionInASS(bool bRespect) {
}

void UBGUAnimationSyncComponent::OnEndSyncAnimationOnGuest(bool bStopGuestMontage) {
}

void UBGUAnimationSyncComponent::OnBeginSyncAnimationOnGuest(UAnimMontage* InGuestMontage, FName InTargetSyncPointOnHost, FName InSelfSyncPointOnGuest, bool bEnableDebugDraw, float NotifyBeginTime, USkeletalMeshComponent* DummyMesh, AActor* InGuestActor, float InBlendInTime, float PlayRate, bool bIgnoreSceneCollision) {
}


