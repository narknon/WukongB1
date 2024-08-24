#include "BAN_GSItemTeleportTrigger.h"

UBAN_GSItemTeleportTrigger::UBAN_GSItemTeleportTrigger() {
    this->ItemTeleportType = BANItemTeleportType::TeleportTargetRebirthPointId;
    this->TargetRebirthPointId = 0;
}

void UBAN_GSItemTeleportTrigger::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSItemTeleportTrigger::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


