#include "BED_FSMNode_GI_Loading_SaveArchiveInTravelLevel.h"

UBED_FSMNode_GI_Loading_SaveArchiveInTravelLevel::UBED_FSMNode_GI_Loading_SaveArchiveInTravelLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SaveArchiveInTravelLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_SaveArchiveInTravelLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


