#include "BED_BehaviorAsset.h"

UBED_BehaviorAsset::UBED_BehaviorAsset() {
}

ECalliopeViewType UBED_BehaviorAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_BehaviorAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_BehaviorAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_BehaviorAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_BehaviorAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_BehaviorAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_BehaviorAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_BehaviorAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_BehaviorAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


