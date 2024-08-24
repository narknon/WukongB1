#include "BED_FSMNode_GI_Loading_UnrealTravelToServer.h"

UBED_FSMNode_GI_Loading_UnrealTravelToServer::UBED_FSMNode_GI_Loading_UnrealTravelToServer() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_UnrealTravelToServer::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_UnrealTravelToServer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


