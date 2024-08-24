#include "BANS_GSAttachEquipCompToSocket.h"

UBANS_GSAttachEquipCompToSocket::UBANS_GSAttachEquipCompToSocket() {
    this->EquipPosition = EquipPosition::Head;
}

void UBANS_GSAttachEquipCompToSocket::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttachEquipCompToSocket::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


