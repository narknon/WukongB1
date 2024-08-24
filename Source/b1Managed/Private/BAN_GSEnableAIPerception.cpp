#include "BAN_GSEnableAIPerception.h"

UBAN_GSEnableAIPerception::UBAN_GSEnableAIPerception() {
    this->EnableAIPerception = false;
}

void UBAN_GSEnableAIPerception::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSEnableAIPerception::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


