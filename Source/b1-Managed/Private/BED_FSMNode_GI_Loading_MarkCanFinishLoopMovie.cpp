#include "BED_FSMNode_GI_Loading_MarkCanFinishLoopMovie.h"

UBED_FSMNode_GI_Loading_MarkCanFinishLoopMovie::UBED_FSMNode_GI_Loading_MarkCanFinishLoopMovie() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_MarkCanFinishLoopMovie::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_MarkCanFinishLoopMovie::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


