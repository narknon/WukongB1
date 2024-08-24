#include "BED_BehaviorNode_Random.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_Random::UBED_BehaviorNode_Random() {
    this->Category = TEXT("ConditionOnce");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->SuccessRate = 0.00f;
    this->bReverseCondition = false;
}

bool UBED_BehaviorNode_Random::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

FString UBED_BehaviorNode_Random::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


