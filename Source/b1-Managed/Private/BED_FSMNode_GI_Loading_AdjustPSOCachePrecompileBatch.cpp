#include "BED_FSMNode_GI_Loading_AdjustPSOCachePrecompileBatch.h"

UBED_FSMNode_GI_Loading_AdjustPSOCachePrecompileBatch::UBED_FSMNode_GI_Loading_AdjustPSOCachePrecompileBatch() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_AdjustPSOCachePrecompileBatch::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_AdjustPSOCachePrecompileBatch::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


