#include "BED_FSMNode_GI_Loading_LockSaveArchiveByTravelLevel.h"

UBED_FSMNode_GI_Loading_LockSaveArchiveByTravelLevel::UBED_FSMNode_GI_Loading_LockSaveArchiveByTravelLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LockSaveArchiveByTravelLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LockSaveArchiveByTravelLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


