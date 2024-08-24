#include "BAIT_TryFindSceneItem.h"

UBAIT_TryFindSceneItem::UBAIT_TryFindSceneItem() {
    this->FindSceneItemWay = FindSceneItemWay::FindNearest;
    this->DistanceWeight = 0.00f;
    this->AngleWeight = 0.00f;
    this->LineTraceWeight = 0.00f;
    this->NeedRemoveCurrentCatch = true;
    this->EnableSearchDistanceScope = false;
    this->MinSearchDistance = 0.00f;
    this->MaxSearchDistance = 0.00f;
    this->EnableSearchAngleRequirement = false;
    this->RequiredMaxSearchAngle = 0.00f;
}


