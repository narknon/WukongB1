#include "BANS_GSSyncAnimations.h"

UBANS_GSSyncAnimations::UBANS_GSSyncAnimations() {
    this->AnimNSType = EGsEnAnimNS::SyncAnimation;
    this->bFoundHostSyncPointOnDummyMesh = false;
    this->SelfSyncPointOnHost = TEXT("Root");
    this->SelfSyncPointOnGuest = TEXT("Root");
    this->GuestMontage = NULL;
    this->bForceSyncDummyMeshAnimation = false;
    this->bEnableDebugDraw = true;
}

void UBANS_GSSyncAnimations::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

EGsEnAnimNS UBANS_GSSyncAnimations::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSSyncAnimations::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSSyncAnimations::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


