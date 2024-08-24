#include "BED_FSMNode_GI_Loading_WaitPlayerCameraBlend.h"

UBED_FSMNode_GI_Loading_WaitPlayerCameraBlend::UBED_FSMNode_GI_Loading_WaitPlayerCameraBlend() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitPlayerCameraBlend::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitPlayerCameraBlend::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


