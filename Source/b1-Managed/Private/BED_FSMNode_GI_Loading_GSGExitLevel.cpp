#include "BED_FSMNode_GI_Loading_GSGExitLevel.h"

UBED_FSMNode_GI_Loading_GSGExitLevel::UBED_FSMNode_GI_Loading_GSGExitLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGExitLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGExitLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


