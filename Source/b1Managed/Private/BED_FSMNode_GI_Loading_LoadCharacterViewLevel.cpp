#include "BED_FSMNode_GI_Loading_LoadCharacterViewLevel.h"

UBED_FSMNode_GI_Loading_LoadCharacterViewLevel::UBED_FSMNode_GI_Loading_LoadCharacterViewLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LoadCharacterViewLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoadCharacterViewLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


