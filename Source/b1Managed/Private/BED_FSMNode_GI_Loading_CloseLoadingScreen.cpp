#include "BED_FSMNode_GI_Loading_CloseLoadingScreen.h"

UBED_FSMNode_GI_Loading_CloseLoadingScreen::UBED_FSMNode_GI_Loading_CloseLoadingScreen() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_CloseLoadingScreen::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_CloseLoadingScreen::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


