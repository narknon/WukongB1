#include "BAN_GSMagicallyChange.h"

UBAN_GSMagicallyChange::UBAN_GSMagicallyChange() {
    this->MagicallyChangeConfig = NULL;
    this->MagicallyChangeSkillID = 0;
    this->RecoverySkillID = 0;
}

void UBAN_GSMagicallyChange::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSMagicallyChange::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


