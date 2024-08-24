#include "BED_FSMNode_GI_Loading_CheckArchiveDataIsValid.h"

UBED_FSMNode_GI_Loading_CheckArchiveDataIsValid::UBED_FSMNode_GI_Loading_CheckArchiveDataIsValid() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_CheckArchiveDataIsValid::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_CheckArchiveDataIsValid::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


