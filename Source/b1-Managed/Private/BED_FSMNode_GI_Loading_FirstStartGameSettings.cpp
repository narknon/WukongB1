#include "BED_FSMNode_GI_Loading_FirstStartGameSettings.h"

UBED_FSMNode_GI_Loading_FirstStartGameSettings::UBED_FSMNode_GI_Loading_FirstStartGameSettings() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_FirstStartGameSettings::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_FirstStartGameSettings::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


