#include "BAN_PlayDBCWithTargetInfo.h"

UBAN_PlayDBCWithTargetInfo::UBAN_PlayDBCWithTargetInfo() {
    this->DBCOwnerType = EANTriggerEffectTargetType::Owner;
    this->MinorTargetType = EANTriggerEffectTargetType::Owner;
    this->DBC = NULL;
}

void UBAN_PlayDBCWithTargetInfo::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


