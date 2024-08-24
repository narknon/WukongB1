#include "BED_BehaviorNode_DetectUnitOnce.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_DetectUnitOnce::UBED_BehaviorNode_DetectUnitOnce() {
    this->Category = TEXT("ConditionOnce");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->UnitType = DetectedUnitType::Self;
    this->ConditionalRelation = ConditionalRelation::And;
    this->bReverseCondition = false;
}

bool UBED_BehaviorNode_DetectUnitOnce::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_DetectUnitOnce::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


