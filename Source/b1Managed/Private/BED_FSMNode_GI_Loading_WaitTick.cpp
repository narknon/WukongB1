#include "BED_FSMNode_GI_Loading_WaitTick.h"

UBED_FSMNode_GI_Loading_WaitTick::UBED_FSMNode_GI_Loading_WaitTick() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
    this->WaitTotalTick = 0;
}

void UBED_FSMNode_GI_Loading_WaitTick::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitTick::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


