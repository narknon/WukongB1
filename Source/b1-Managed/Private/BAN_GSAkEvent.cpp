#include "BAN_GSAkEvent.h"

UBAN_GSAkEvent::UBAN_GSAkEvent() {
    this->CanHandleStopRequest = false;
    this->PlaySubtitle = false;
    this->Follow = false;
}

void UBAN_GSAkEvent::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

TArray<FSoftObjectPath> UBAN_GSAkEvent::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}

bool UBAN_GSAkEvent::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


