#include "BAN_GSSetSimpleState.h"

UBAN_GSSetSimpleState::UBAN_GSSetSimpleState() {
    this->SimpleState = EBGUSimpleState::Normal;
    this->IsRemove = false;
}

void UBAN_GSSetSimpleState::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


