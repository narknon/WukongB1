#include "BED_DialogueAsset.h"

UBED_DialogueAsset::UBED_DialogueAsset() {
}

ECalliopeViewType UBED_DialogueAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_DialogueAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_DialogueAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_DialogueAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_DialogueAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_DialogueAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_DialogueAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_DialogueAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_DialogueAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


