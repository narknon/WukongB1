#include "BED_FSMNode_GI_Loading_InitNewArchiveData.h"

UBED_FSMNode_GI_Loading_InitNewArchiveData::UBED_FSMNode_GI_Loading_InitNewArchiveData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_InitNewArchiveData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_InitNewArchiveData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


