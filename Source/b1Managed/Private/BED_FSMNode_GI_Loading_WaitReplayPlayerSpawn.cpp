#include "BED_FSMNode_GI_Loading_WaitReplayPlayerSpawn.h"

UBED_FSMNode_GI_Loading_WaitReplayPlayerSpawn::UBED_FSMNode_GI_Loading_WaitReplayPlayerSpawn() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitReplayPlayerSpawn::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitReplayPlayerSpawn::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


