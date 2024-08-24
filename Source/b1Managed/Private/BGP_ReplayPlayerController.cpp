#include "BGP_ReplayPlayerController.h"
#include "ActorCompContainerCS.h"
#include "BGP_PlayerCameraManagerCS.h"
#include "BPS_ReplayPlayerControllerDataComp.h"

ABGP_ReplayPlayerController::ABGP_ReplayPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ABGP_PlayerCameraManagerCS::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->DataComp = CreateDefaultSubobject<UBPS_ReplayPlayerControllerDataComp>(TEXT("ReplayPlayerControllerDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
}

void ABGP_ReplayPlayerController::OnRep_PawnCS_Implementation() {
}


