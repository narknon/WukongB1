#include "BED_BehaviorNode_OnUnitTrans.h"

UBED_BehaviorNode_OnUnitTrans::UBED_BehaviorNode_OnUnitTrans() {
    this->OutputPins.AddDefaulted(1);
    this->UnitType = DetectedUnitType::Self;
    this->TransType = PlayerTransEndType::None;
}

bool UBED_BehaviorNode_OnUnitTrans::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_OnUnitTrans::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


