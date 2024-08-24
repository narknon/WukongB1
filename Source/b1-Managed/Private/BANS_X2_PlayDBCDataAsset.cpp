#include "BANS_X2_PlayDBCDataAsset.h"

UBANS_X2_PlayDBCDataAsset::UBANS_X2_PlayDBCDataAsset() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->Play = true;
    this->DataAsset = NULL;
    this->PlayByDispWorld = false;
    this->DBC_Main = DispLibDBCAnimNotifyTarget::Self;
    this->DBC_Minor = DispLibDBCAnimNotifyTarget::EnemyTarget;
    this->StopIfTargetNull = true;
}

void UBANS_X2_PlayDBCDataAsset::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_X2_PlayDBCDataAsset::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


