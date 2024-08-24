#include "BANS_Teleport.h"

UBANS_Teleport::UBANS_Teleport() {
    this->TeleportPointType = TeleportPointType::CachedInteractItem;
}

void UBANS_Teleport::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


