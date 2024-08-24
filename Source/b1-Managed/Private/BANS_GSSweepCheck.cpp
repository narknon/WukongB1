#include "BANS_GSSweepCheck.h"
#include "EGsEnAnimNS.h"

UBANS_GSSweepCheck::UBANS_GSSweepCheck() {
    this->AnimNSType = EGsEnAnimNS::SweepCheck;
    this->WeaponIndex = -1;
    this->bForceUpdateDescData = false;
    this->HitChrAudioID = 0;
    this->HitChrFXWeight = 0;
    this->CanHitBackBullet = false;
    this->AtkReboundingAM = NULL;
    this->LowAtkReboundingAM = NULL;
    this->SweepCheckGroupID = -1;
}

bool UBANS_GSSweepCheck::HasAbnormalStateData() const {
    return false;
}

void UBANS_GSSweepCheck::ResetSweepCheckChanel(ECollisionChannel NewCollisionChanel) const {
}

bool UBANS_GSSweepCheck::ReplaceEffectIDByPreID(int32 OldPreID, int32 NewPreID) const {
    return false;
}

void UBANS_GSSweepCheck::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBANS_GSSweepCheck::AddAssistBreakFrozenEffectID(int32 AssistBreakFrozenEffectID) const {
    return false;
}

void UBANS_GSSweepCheck::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSSweepCheck::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

void UBANS_GSSweepCheck::GSValidateInputCS_Implementation(AActor* Actor) const {
}


