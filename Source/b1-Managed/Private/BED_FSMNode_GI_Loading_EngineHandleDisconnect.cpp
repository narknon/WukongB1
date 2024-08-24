#include "BED_FSMNode_GI_Loading_EngineHandleDisconnect.h"

UBED_FSMNode_GI_Loading_EngineHandleDisconnect::UBED_FSMNode_GI_Loading_EngineHandleDisconnect() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_EngineHandleDisconnect::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_EngineHandleDisconnect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


