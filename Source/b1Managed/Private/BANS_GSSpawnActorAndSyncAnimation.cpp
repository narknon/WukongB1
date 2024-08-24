#include "BANS_GSSpawnActorAndSyncAnimation.h"

UBANS_GSSpawnActorAndSyncAnimation::UBANS_GSSpawnActorAndSyncAnimation() {
    this->AnimNSType = EGsEnAnimNS::SyncAnimation;
    this->SpawnActorTemplate = NULL;
    this->bFoundHostSyncPointOnDummyMesh = false;
    this->SelfSyncPointOnHost = TEXT("Root");
    this->SelfSyncPointOnGuest = TEXT("Root");
    this->GuestMontage = NULL;
    this->bActorKeepAlive = false;
    this->DestroyDelayTime = 0.00f;
    this->bStopGuestMontageOnEnd = false;
}

EGsEnAnimNS UBANS_GSSpawnActorAndSyncAnimation::GetAnimNSType_Implementation() const {
    return EGsEnAnimNS::None;
}

void UBANS_GSSpawnActorAndSyncAnimation::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSpawnActorAndSyncAnimation::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


