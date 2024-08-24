#include "BED_StateAsset.h"

UBED_StateAsset::UBED_StateAsset() {
    this->PhaseBehaviorAsset = NULL;
}

ECalliopeViewType UBED_StateAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_StateAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_StateAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_StateAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_StateAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_StateAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_StateAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_StateAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_StateAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


