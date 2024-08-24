#include "BED_FSMNode_GI_Loading_ReleaseSaveArchiveByTravelLevel.h"

UBED_FSMNode_GI_Loading_ReleaseSaveArchiveByTravelLevel::UBED_FSMNode_GI_Loading_ReleaseSaveArchiveByTravelLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ReleaseSaveArchiveByTravelLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ReleaseSaveArchiveByTravelLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


