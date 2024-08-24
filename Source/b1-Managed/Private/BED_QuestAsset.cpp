#include "BED_QuestAsset.h"

UBED_QuestAsset::UBED_QuestAsset() {
}

ECalliopeViewType UBED_QuestAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

void UBED_QuestAsset::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

UClass* UBED_QuestAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_QuestAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_QuestAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_QuestAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_QuestAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_QuestAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_QuestAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_QuestAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


