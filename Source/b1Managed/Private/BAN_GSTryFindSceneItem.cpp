#include "BAN_GSTryFindSceneItem.h"

UBAN_GSTryFindSceneItem::UBAN_GSTryFindSceneItem() {
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->FindSceneItemWay = FindSceneItemWay::FindNearest;
    this->Angle = 0.00f;
    this->NeedRemoveCurrentCatch = false;
    this->EnableDrawDebug = false;
}

void UBAN_GSTryFindSceneItem::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSTryFindSceneItem::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


