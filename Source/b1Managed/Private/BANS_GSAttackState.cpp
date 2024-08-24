#include "BANS_GSAttackState.h"
#include "EGsEnAnimNS.h"

UBANS_GSAttackState::UBANS_GSAttackState() {
    this->AnimNSType = EGsEnAnimNS::AttackState;
    this->EnableMove = false;
    this->KeepMMRunning = false;
}

void UBANS_GSAttackState::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttackState::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_GSAttackState::GSAllowCrossSection_Implementation() const {
    return false;
}

void UBANS_GSAttackState::GSOnSectionManuallyChanged_Implementation(ABGUCharacter* OwnerChar, float RemainingDuration) const {
}


