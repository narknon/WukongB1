#include "BED_FSMNode_GI_Loading_WaitUntilGameStateInit.h"

UBED_FSMNode_GI_Loading_WaitUntilGameStateInit::UBED_FSMNode_GI_Loading_WaitUntilGameStateInit() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitUntilGameStateInit::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitUntilGameStateInit::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


