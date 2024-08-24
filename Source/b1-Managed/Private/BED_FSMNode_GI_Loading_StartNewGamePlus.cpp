#include "BED_FSMNode_GI_Loading_StartNewGamePlus.h"

UBED_FSMNode_GI_Loading_StartNewGamePlus::UBED_FSMNode_GI_Loading_StartNewGamePlus() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_StartNewGamePlus::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_StartNewGamePlus::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


