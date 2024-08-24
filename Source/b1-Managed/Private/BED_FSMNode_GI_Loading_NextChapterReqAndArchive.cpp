#include "BED_FSMNode_GI_Loading_NextChapterReqAndArchive.h"

UBED_FSMNode_GI_Loading_NextChapterReqAndArchive::UBED_FSMNode_GI_Loading_NextChapterReqAndArchive() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_NextChapterReqAndArchive::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_NextChapterReqAndArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


