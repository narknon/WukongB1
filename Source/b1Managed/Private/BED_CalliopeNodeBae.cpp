#include "BED_CalliopeNodeBae.h"

UBED_CalliopeNodeBae::UBED_CalliopeNodeBae() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_CalliopeNodeBae::GetActorGuid_Implementation(AActor* InActor, FString& OutActorGuid) const {
    return false;
}

bool UBED_CalliopeNodeBae::CanManageStates_Implementation() const {
    return false;
}

int32 UBED_CalliopeNodeBae::GetActorGuidOptions_Implementation(const FString& PropertyName, TArray<FActorGuidOption>& OutOptions) const {
    return 0;
}

FCalliopeGuid UBED_CalliopeNodeBae::GetGuid_Implementation() const {
    return FCalliopeGuid{};
}

bool UBED_CalliopeNodeBae::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

bool UBED_CalliopeNodeBae::IsBranchGraphNode_Implementation() const {
    return false;
}

bool UBED_CalliopeNodeBae::GetBranchGraphToEditInCS_Implementation(FString& OutBranchGraphIdentifier) {
    return false;
}


