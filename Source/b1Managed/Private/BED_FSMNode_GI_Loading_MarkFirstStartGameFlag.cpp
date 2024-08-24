#include "BED_FSMNode_GI_Loading_MarkFirstStartGameFlag.h"

UBED_FSMNode_GI_Loading_MarkFirstStartGameFlag::UBED_FSMNode_GI_Loading_MarkFirstStartGameFlag() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_MarkFirstStartGameFlag::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_MarkFirstStartGameFlag::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


