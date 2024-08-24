#include "BED_FSMNode_GI_Loading_WaitMatchStart.h"

UBED_FSMNode_GI_Loading_WaitMatchStart::UBED_FSMNode_GI_Loading_WaitMatchStart() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitMatchStart::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitMatchStart::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


