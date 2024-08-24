#include "BAN_HandleAiConversation.h"

UBAN_HandleAiConversation::UBAN_HandleAiConversation() {
    this->UseInteractTemplete = false;
}

void UBAN_HandleAiConversation::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_HandleAiConversation::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


