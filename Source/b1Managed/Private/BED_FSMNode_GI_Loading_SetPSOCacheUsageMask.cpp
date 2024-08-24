#include "BED_FSMNode_GI_Loading_SetPSOCacheUsageMask.h"

UBED_FSMNode_GI_Loading_SetPSOCacheUsageMask::UBED_FSMNode_GI_Loading_SetPSOCacheUsageMask() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SetPSOCacheUsageMask::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_SetPSOCacheUsageMask::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


