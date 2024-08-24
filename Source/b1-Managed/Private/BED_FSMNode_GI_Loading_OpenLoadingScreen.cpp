#include "BED_FSMNode_GI_Loading_OpenLoadingScreen.h"

UBED_FSMNode_GI_Loading_OpenLoadingScreen::UBED_FSMNode_GI_Loading_OpenLoadingScreen() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
    this->WaitTick = 0;
    this->Reason = LoadingUIFadeInReason::None;
}

void UBED_FSMNode_GI_Loading_OpenLoadingScreen::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_OpenLoadingScreen::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


