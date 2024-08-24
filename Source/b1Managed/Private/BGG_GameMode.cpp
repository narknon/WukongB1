#include "BGG_GameMode.h"

ABGG_GameMode::ABGG_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataComp = NULL;
    this->ActorCompContainerCS = NULL;
    this->PlayerAllocNum = 0;
    this->EventCollection = NULL;
}

void ABGG_GameMode::StartPlayCS_Implementation() {
}

AActor* ABGG_GameMode::ChoosePlayerStart_Implementation(AController* Player) {
    return NULL;
}

void ABGG_GameMode::PostSeamlessTravelCS_Implementation() {
}

void ABGG_GameMode::GetSeamlessTravelActorListCS_Implementation(bool bToTransition, TArray<AActor*>& ActorList) {
}


