#include "BED_FSMNode_GI_Loading_ResetNewGameplusArchive.h"

UBED_FSMNode_GI_Loading_ResetNewGameplusArchive::UBED_FSMNode_GI_Loading_ResetNewGameplusArchive() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ResetNewGameplusArchive::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ResetNewGameplusArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


