#include "BED_FSMNode_GI_Loading_WaitLocalPlayerFillLoginOption.h"

UBED_FSMNode_GI_Loading_WaitLocalPlayerFillLoginOption::UBED_FSMNode_GI_Loading_WaitLocalPlayerFillLoginOption() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitLocalPlayerFillLoginOption::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitLocalPlayerFillLoginOption::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


