#include "BED_ComboAsset.h"

UBED_ComboAsset::UBED_ComboAsset() {
}

ECalliopeViewType UBED_ComboAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_ComboAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_ComboAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_ComboAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_ComboAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_ComboAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_ComboAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_ComboAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_ComboAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


