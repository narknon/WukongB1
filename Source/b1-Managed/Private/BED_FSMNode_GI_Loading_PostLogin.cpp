#include "BED_FSMNode_GI_Loading_PostLogin.h"

UBED_FSMNode_GI_Loading_PostLogin::UBED_FSMNode_GI_Loading_PostLogin() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PostLogin::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PostLogin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


