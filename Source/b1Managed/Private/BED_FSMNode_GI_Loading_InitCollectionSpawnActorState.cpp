#include "BED_FSMNode_GI_Loading_InitCollectionSpawnActorState.h"

UBED_FSMNode_GI_Loading_InitCollectionSpawnActorState::UBED_FSMNode_GI_Loading_InitCollectionSpawnActorState() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_InitCollectionSpawnActorState::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_InitCollectionSpawnActorState::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


