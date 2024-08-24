#include "BED_FSMNode_GI_LoadingAnyState.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_GI_LoadingAnyState::UBED_FSMNode_GI_LoadingAnyState() {
    this->Category = TEXT("GI_Loading State");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
}

void UBED_FSMNode_GI_LoadingAnyState::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


