#include "BED_FSMNode_GI_Loading_WaitAllAssetLoadFinsh.h"

UBED_FSMNode_GI_Loading_WaitAllAssetLoadFinsh::UBED_FSMNode_GI_Loading_WaitAllAssetLoadFinsh() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitAllAssetLoadFinsh::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitAllAssetLoadFinsh::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


