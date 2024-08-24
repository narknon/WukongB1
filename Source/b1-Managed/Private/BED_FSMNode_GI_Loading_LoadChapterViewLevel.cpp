#include "BED_FSMNode_GI_Loading_LoadChapterViewLevel.h"

UBED_FSMNode_GI_Loading_LoadChapterViewLevel::UBED_FSMNode_GI_Loading_LoadChapterViewLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LoadChapterViewLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoadChapterViewLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


