#include "BED_FSMNode_PS_TransactionAnyState.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_PS_TransactionAnyState::UBED_FSMNode_PS_TransactionAnyState() {
    this->Category = TEXT("PS_Transaction State");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
}

void UBED_FSMNode_PS_TransactionAnyState::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


