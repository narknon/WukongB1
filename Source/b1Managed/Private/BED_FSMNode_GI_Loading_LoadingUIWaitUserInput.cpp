#include "BED_FSMNode_GI_Loading_LoadingUIWaitUserInput.h"

UBED_FSMNode_GI_Loading_LoadingUIWaitUserInput::UBED_FSMNode_GI_Loading_LoadingUIWaitUserInput() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LoadingUIWaitUserInput::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoadingUIWaitUserInput::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


