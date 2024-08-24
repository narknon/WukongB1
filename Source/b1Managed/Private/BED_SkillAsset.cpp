#include "BED_SkillAsset.h"

UBED_SkillAsset::UBED_SkillAsset() {
}

ECalliopeViewType UBED_SkillAsset::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

UClass* UBED_SkillAsset::GetStartNodeClass_Implementation() const {
    return NULL;
}

UClass* UBED_SkillAsset::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_SkillAsset::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_SkillAsset::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_SkillAsset::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_SkillAsset::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_SkillAsset::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_SkillAsset::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


