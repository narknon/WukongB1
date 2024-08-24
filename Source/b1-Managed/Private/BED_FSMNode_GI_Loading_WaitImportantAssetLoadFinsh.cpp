#include "BED_FSMNode_GI_Loading_WaitImportantAssetLoadFinsh.h"

UBED_FSMNode_GI_Loading_WaitImportantAssetLoadFinsh::UBED_FSMNode_GI_Loading_WaitImportantAssetLoadFinsh() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitImportantAssetLoadFinsh::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitImportantAssetLoadFinsh::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


