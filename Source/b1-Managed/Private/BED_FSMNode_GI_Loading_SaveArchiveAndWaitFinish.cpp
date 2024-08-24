#include "BED_FSMNode_GI_Loading_SaveArchiveAndWaitFinish.h"

UBED_FSMNode_GI_Loading_SaveArchiveAndWaitFinish::UBED_FSMNode_GI_Loading_SaveArchiveAndWaitFinish() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SaveArchiveAndWaitFinish::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_SaveArchiveAndWaitFinish::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


