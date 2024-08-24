#include "BED_FSMNode_GI_Loading_LoadCommLevel.h"

UBED_FSMNode_GI_Loading_LoadCommLevel::UBED_FSMNode_GI_Loading_LoadCommLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LoadCommLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoadCommLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


