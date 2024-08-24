#include "BED_FSMNode_GI_Loading_MarkNewGameplusReady.h"

UBED_FSMNode_GI_Loading_MarkNewGameplusReady::UBED_FSMNode_GI_Loading_MarkNewGameplusReady() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_MarkNewGameplusReady::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_MarkNewGameplusReady::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


