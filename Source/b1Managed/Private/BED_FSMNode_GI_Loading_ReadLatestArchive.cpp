#include "BED_FSMNode_GI_Loading_ReadLatestArchive.h"

UBED_FSMNode_GI_Loading_ReadLatestArchive::UBED_FSMNode_GI_Loading_ReadLatestArchive() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ReadLatestArchive::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ReadLatestArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


