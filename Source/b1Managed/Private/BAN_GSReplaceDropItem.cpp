#include "BAN_GSReplaceDropItem.h"

UBAN_GSReplaceDropItem::UBAN_GSReplaceDropItem() {
    this->ReplacementLocationRule = EDetachmentRule::KeepWorld;
    this->ReplacementRotationRule = EDetachmentRule::KeepWorld;
    this->ReplacementScaleRule = EDetachmentRule::KeepWorld;
}

void UBAN_GSReplaceDropItem::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSReplaceDropItem::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


