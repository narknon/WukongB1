#include "BAN_GSTriggerCostItem.h"

UBAN_GSTriggerCostItem::UBAN_GSTriggerCostItem() {
    this->UseHulu = false;
}

void UBAN_GSTriggerCostItem::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSTriggerCostItem::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


