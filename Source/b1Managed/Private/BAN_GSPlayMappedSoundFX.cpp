#include "BAN_GSPlayMappedSoundFX.h"

UBAN_GSPlayMappedSoundFX::UBAN_GSPlayMappedSoundFX() {
    this->EquipPosition = EquipPosition::Head;
    this->ActionTypeID = 0;
    this->bIsFollow = false;
}

void UBAN_GSPlayMappedSoundFX::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


