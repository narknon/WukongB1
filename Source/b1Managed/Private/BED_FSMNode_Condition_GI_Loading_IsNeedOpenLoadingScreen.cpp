#include "BED_FSMNode_Condition_GI_Loading_IsNeedOpenLoadingScreen.h"

UBED_FSMNode_Condition_GI_Loading_IsNeedOpenLoadingScreen::UBED_FSMNode_Condition_GI_Loading_IsNeedOpenLoadingScreen() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsNeedOpenLoadingScreen::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


