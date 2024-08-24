#include "BED_FSMNode_GI_Loading_ShowAgreementPolicyInStartGame.h"

UBED_FSMNode_GI_Loading_ShowAgreementPolicyInStartGame::UBED_FSMNode_GI_Loading_ShowAgreementPolicyInStartGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ShowAgreementPolicyInStartGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ShowAgreementPolicyInStartGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


