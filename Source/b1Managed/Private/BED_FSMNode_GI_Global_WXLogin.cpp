#include "BED_FSMNode_GI_Global_WXLogin.h"

UBED_FSMNode_GI_Global_WXLogin::UBED_FSMNode_GI_Global_WXLogin() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_WXLogin::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_WXLogin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


