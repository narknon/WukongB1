#include "BANS_GSMoveToSceneItem.h"

UBANS_GSMoveToSceneItem::UBANS_GSMoveToSceneItem() {
    this->NoteString1 = 0;
    this->IsTeleport = true;
    this->CalibrationTrans = true;
    this->bResetSceneItemOnFinish = false;
    this->ScaleXAxisOnly = false;
    this->EnableDebugMode = false;
}

void UBANS_GSMoveToSceneItem::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSMoveToSceneItem::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


