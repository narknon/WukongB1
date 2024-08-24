#include "BED_FSMNode_GI_Loading_SpawnCharacterForClient.h"

UBED_FSMNode_GI_Loading_SpawnCharacterForClient::UBED_FSMNode_GI_Loading_SpawnCharacterForClient() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SpawnCharacterForClient::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_SpawnCharacterForClient::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


