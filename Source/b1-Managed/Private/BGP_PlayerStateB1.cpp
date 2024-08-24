#include "BGP_PlayerStateB1.h"
#include "ActorCompContainerCS.h"
#include "BPS_PlayerStateDataCompB1.h"

ABGP_PlayerStateB1::ABGP_PlayerStateB1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BGPDataComp = CreateDefaultSubobject<UBPS_PlayerStateDataCompB1>(TEXT("PlayerStateDataCompB1"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
}


