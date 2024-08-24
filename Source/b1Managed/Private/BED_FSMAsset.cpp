#include "BED_FSMAsset.h"

UBED_FSMAsset::UBED_FSMAsset() {
}

ECalliopeViewType UBED_FSMAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_FSMAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_FSMAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_FSMAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_FSMAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_FSMAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_FSMAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_FSMAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_FSMAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


