#include "BED_FSMNode_GI_Loading_WaitGSLoginSuccess.h"

UBED_FSMNode_GI_Loading_WaitGSLoginSuccess::UBED_FSMNode_GI_Loading_WaitGSLoginSuccess() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitGSLoginSuccess::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitGSLoginSuccess::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


