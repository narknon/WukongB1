#include "BED_FSMNode_GI_Loading_ShowMessageBoxAndWaitConfirm.h"

UBED_FSMNode_GI_Loading_ShowMessageBoxAndWaitConfirm::UBED_FSMNode_GI_Loading_ShowMessageBoxAndWaitConfirm() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ShowMessageBoxAndWaitConfirm::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ShowMessageBoxAndWaitConfirm::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


