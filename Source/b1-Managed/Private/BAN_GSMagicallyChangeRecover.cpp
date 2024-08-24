#include "BAN_GSMagicallyChangeRecover.h"

UBAN_GSMagicallyChangeRecover::UBAN_GSMagicallyChangeRecover() {
    this->RecoverySkillID = 0;
}

void UBAN_GSMagicallyChangeRecover::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSMagicallyChangeRecover::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


