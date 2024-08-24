#include "BED_BehaviorNode_WeightRandom.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_WeightRandom::UBED_BehaviorNode_WeightRandom() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("ConditionOnce");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode_WeightRandom::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

void UBED_BehaviorNode_WeightRandom::OnRefreshAssetInCS_Implementation() const {
}

TArray<FName> UBED_BehaviorNode_WeightRandom::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}


