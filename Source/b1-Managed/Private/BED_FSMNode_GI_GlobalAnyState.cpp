#include "BED_FSMNode_GI_GlobalAnyState.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_GI_GlobalAnyState::UBED_FSMNode_GI_GlobalAnyState() {
    this->Category = TEXT("GI_Global State");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
}

void UBED_FSMNode_GI_GlobalAnyState::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


