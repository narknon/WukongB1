#include "BGP_AIPlayerControllerB1.h"
#include "ActorCompContainerCS.h"
#include "BPS_PlayerControllerDataCompB1.h"

ABGP_AIPlayerControllerB1::ABGP_AIPlayerControllerB1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataComp = CreateDefaultSubobject<UBPS_PlayerControllerDataCompB1>(TEXT("PlayerControllerDataCompB1"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
}


