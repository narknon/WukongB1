#include "BED_FSMNode_PS_Transaction_TransactionTask.h"

UBED_FSMNode_PS_Transaction_TransactionTask::UBED_FSMNode_PS_Transaction_TransactionTask() {
    this->Category = TEXT("PS_Transaction State");
    this->InputPins.AddDefaulted(1);
    this->TransactionTaskType = TransactionTaskType::Interact_RequestInteractObjLock;
}

void UBED_FSMNode_PS_Transaction_TransactionTask::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_PS_Transaction_TransactionTask::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


