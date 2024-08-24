#include "BED_FSMNode_GI_Loading_PlayGoDownloadIncompleteImpl.h"

UBED_FSMNode_GI_Loading_PlayGoDownloadIncompleteImpl::UBED_FSMNode_GI_Loading_PlayGoDownloadIncompleteImpl() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PlayGoDownloadIncompleteImpl::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PlayGoDownloadIncompleteImpl::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


