#include "BED_ProcessAsset.h"

UBED_ProcessAsset::UBED_ProcessAsset() {
}

bool UBED_ProcessAsset::HasRevertCondition() {
    return false;
}

ECalliopeViewType UBED_ProcessAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

void UBED_ProcessAsset::RegisterNode_Implementation(const FCalliopeGuid& NewGuid, UCalliopeNode* NewNode) {
}

void UBED_ProcessAsset::UnregisterNode_Implementation(const FCalliopeGuid& NodeGuid) {
}

bool UBED_ProcessAsset::IsEditorOnlyCS_Implementation() const {
    return false;
}

bool UBED_ProcessAsset::CanManageStates_Implementation() const {
    return false;
}

UClass* UBED_ProcessAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

void UBED_ProcessAsset::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

void UBED_ProcessAsset::OnRefreshAssetInCS_Implementation() {
}

UClass* UBED_ProcessAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

void UBED_ProcessAsset::PostRefreshAssetInCS_Implementation() {
}

int32 UBED_ProcessAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_ProcessAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_ProcessAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_ProcessAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_ProcessAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_ProcessAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


