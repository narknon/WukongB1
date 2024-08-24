#include "BGUPlayMontageCallbackProxy.h"

UBGUPlayMontageCallbackProxy::UBGUPlayMontageCallbackProxy() {
}

bool UBGUPlayMontageCallbackProxy::PlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool bSnapShot, const FName StartingSection, const FName ExceptAdditiveSlot) {
    return false;
}

void UBGUPlayMontageCallbackProxy::OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UBGUPlayMontageCallbackProxy::OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UBGUPlayMontageCallbackProxy::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UBGUPlayMontageCallbackProxy::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UBGUPlayMontageCallbackProxy* UBGUPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(int32 ReqIdx, UAnimMontage* MontageToPlay) {
    return NULL;
}


