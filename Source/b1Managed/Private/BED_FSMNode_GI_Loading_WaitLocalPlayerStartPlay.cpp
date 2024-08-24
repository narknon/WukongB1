#include "BED_FSMNode_GI_Loading_WaitLocalPlayerStartPlay.h"

UBED_FSMNode_GI_Loading_WaitLocalPlayerStartPlay::UBED_FSMNode_GI_Loading_WaitLocalPlayerStartPlay() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitLocalPlayerStartPlay::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitLocalPlayerStartPlay::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


