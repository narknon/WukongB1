#include "BED_FSMNode_Condition_GI_Loading_IsNeedCloseLoadingScreen.h"

UBED_FSMNode_Condition_GI_Loading_IsNeedCloseLoadingScreen::UBED_FSMNode_Condition_GI_Loading_IsNeedCloseLoadingScreen() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsNeedCloseLoadingScreen::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


