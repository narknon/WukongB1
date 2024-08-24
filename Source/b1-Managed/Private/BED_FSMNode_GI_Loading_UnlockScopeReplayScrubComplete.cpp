#include "BED_FSMNode_GI_Loading_UnlockScopeReplayScrubComplete.h"

UBED_FSMNode_GI_Loading_UnlockScopeReplayScrubComplete::UBED_FSMNode_GI_Loading_UnlockScopeReplayScrubComplete() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_UnlockScopeReplayScrubComplete::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_UnlockScopeReplayScrubComplete::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


