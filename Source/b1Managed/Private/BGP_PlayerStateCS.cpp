#include "BGP_PlayerStateCS.h"

ABGP_PlayerStateCS::ABGP_PlayerStateCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainerCS = NULL;
}

void ABGP_PlayerStateCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGP_PlayerStateCS::ReceiveDestroyed_Implementation() {
}

void ABGP_PlayerStateCS::PostInitializeComponentsCS_Implementation() {
}


