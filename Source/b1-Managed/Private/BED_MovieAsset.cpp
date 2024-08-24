#include "BED_MovieAsset.h"

UBED_MovieAsset::UBED_MovieAsset() {
}

ECalliopeViewType UBED_MovieAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_MovieAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_MovieAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_MovieAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_MovieAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_MovieAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_MovieAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_MovieAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_MovieAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


