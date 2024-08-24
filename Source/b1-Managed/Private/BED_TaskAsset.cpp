#include "BED_TaskAsset.h"

UBED_TaskAsset::UBED_TaskAsset() {
}

ECalliopeViewType UBED_TaskAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

bool UBED_TaskAsset::IsEditorOnlyCS_Implementation() const {
    return false;
}

UClass* UBED_TaskAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_TaskAsset::GetActorGuidOptions_Implementation(const FString& PropertyName, TArray<FActorGuidOption>& OutOptions) const {
    return 0;
}

UClass* UBED_TaskAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_TaskAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_TaskAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_TaskAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_TaskAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_TaskAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_TaskAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


