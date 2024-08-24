#include "BAN_GSCloudMoveAkEvent.h"

UBAN_GSCloudMoveAkEvent::UBAN_GSCloudMoveAkEvent() {
    this->bIsStop = false;
}

void UBAN_GSCloudMoveAkEvent::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

TArray<FSoftObjectPath> UBAN_GSCloudMoveAkEvent::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}


