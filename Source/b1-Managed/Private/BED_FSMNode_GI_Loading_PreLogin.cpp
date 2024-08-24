#include "BED_FSMNode_GI_Loading_PreLogin.h"

UBED_FSMNode_GI_Loading_PreLogin::UBED_FSMNode_GI_Loading_PreLogin() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PreLogin::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PreLogin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


