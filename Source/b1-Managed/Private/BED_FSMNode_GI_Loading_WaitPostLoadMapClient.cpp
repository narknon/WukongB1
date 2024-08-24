#include "BED_FSMNode_GI_Loading_WaitPostLoadMapClient.h"

UBED_FSMNode_GI_Loading_WaitPostLoadMapClient::UBED_FSMNode_GI_Loading_WaitPostLoadMapClient() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitPostLoadMapClient::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitPostLoadMapClient::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


