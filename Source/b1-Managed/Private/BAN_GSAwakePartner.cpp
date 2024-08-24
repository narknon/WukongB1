#include "BAN_GSAwakePartner.h"

UBAN_GSAwakePartner::UBAN_GSAwakePartner() {
    this->PartnerFilter = 0;
    this->AwakeUnitInFight = false;
    this->CircleRadius = 0;
    this->Height_Up = 0.00f;
    this->Height_Down = 0.00f;
}

void UBAN_GSAwakePartner::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSAwakePartner::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


