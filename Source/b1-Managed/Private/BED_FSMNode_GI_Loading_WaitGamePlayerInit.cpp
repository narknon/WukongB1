#include "BED_FSMNode_GI_Loading_WaitGamePlayerInit.h"

UBED_FSMNode_GI_Loading_WaitGamePlayerInit::UBED_FSMNode_GI_Loading_WaitGamePlayerInit() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitGamePlayerInit::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitGamePlayerInit::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}

