#include "BED_FSMNode_GI_Loading_WaitStartGamePsoPrecompileFinish.h"

UBED_FSMNode_GI_Loading_WaitStartGamePsoPrecompileFinish::UBED_FSMNode_GI_Loading_WaitStartGamePsoPrecompileFinish() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitStartGamePsoPrecompileFinish::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitStartGamePsoPrecompileFinish::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


