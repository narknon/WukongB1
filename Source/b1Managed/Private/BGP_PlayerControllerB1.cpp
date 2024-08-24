#include "BGP_PlayerControllerB1.h"
#include "ActorCompContainerCS.h"
#include "BGP_PlayerCameraManagerCS.h"
#include "BPS_PlayerControllerDataCompB1.h"

ABGP_PlayerControllerB1::ABGP_PlayerControllerB1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ABGP_PlayerCameraManagerCS::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->DataComp = CreateDefaultSubobject<UBPS_PlayerControllerDataCompB1>(TEXT("PlayerControllerDataCompB1"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
}

void ABGP_PlayerControllerB1::OnRep_PawnCS_Implementation() {
}


