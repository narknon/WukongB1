#include "BED_FSMNode_GI_Global_OpenMainMenuLevel.h"

UBED_FSMNode_GI_Global_OpenMainMenuLevel::UBED_FSMNode_GI_Global_OpenMainMenuLevel() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_OpenMainMenuLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_OpenMainMenuLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


