#include "BED_FSMNode_GI_Loading_CacheArchiveDataForClient.h"

UBED_FSMNode_GI_Loading_CacheArchiveDataForClient::UBED_FSMNode_GI_Loading_CacheArchiveDataForClient() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_CacheArchiveDataForClient::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_CacheArchiveDataForClient::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


