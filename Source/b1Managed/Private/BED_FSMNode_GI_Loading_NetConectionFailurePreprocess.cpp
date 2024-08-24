#include "BED_FSMNode_GI_Loading_NetConectionFailurePreprocess.h"

UBED_FSMNode_GI_Loading_NetConectionFailurePreprocess::UBED_FSMNode_GI_Loading_NetConectionFailurePreprocess() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_NetConectionFailurePreprocess::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_NetConectionFailurePreprocess::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


