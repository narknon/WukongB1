#include "BED_FSMNode_GI_Loading_GSGShowLoginUI.h"

UBED_FSMNode_GI_Loading_GSGShowLoginUI::UBED_FSMNode_GI_Loading_GSGShowLoginUI() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGShowLoginUI::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGShowLoginUI::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


