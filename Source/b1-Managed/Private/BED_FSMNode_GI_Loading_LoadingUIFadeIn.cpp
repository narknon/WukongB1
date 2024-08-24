#include "BED_FSMNode_GI_Loading_LoadingUIFadeIn.h"

UBED_FSMNode_GI_Loading_LoadingUIFadeIn::UBED_FSMNode_GI_Loading_LoadingUIFadeIn() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
    this->WaitTick = 0;
    this->Reason = LoadingUIFadeInReason::None;
}

void UBED_FSMNode_GI_Loading_LoadingUIFadeIn::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoadingUIFadeIn::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


