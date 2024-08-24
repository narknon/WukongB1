#include "BAN_GSSetCachePoint.h"

UBAN_GSSetCachePoint::UBAN_GSSetCachePoint() {
    this->Forward = 0;
    this->TempDataID = 0;
}

void UBAN_GSSetCachePoint::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSSetCachePoint::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


