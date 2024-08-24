#include "BAN_X2_PlayDBCDataAsset.h"

UBAN_X2_PlayDBCDataAsset::UBAN_X2_PlayDBCDataAsset() {
    this->Play = true;
    this->DataAsset = NULL;
    this->PlayByDispWorld = false;
    this->DBC_Main = DispLibDBCAnimNotifyTarget::Self;
    this->DBC_Minor = DispLibDBCAnimNotifyTarget::None;
    this->StopIfTargetNull = true;
}

void UBAN_X2_PlayDBCDataAsset::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


