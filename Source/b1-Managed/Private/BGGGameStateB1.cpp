#include "BGGGameStateB1.h"
#include "ActorCompContainerCS.h"
#include "BGG_GameStateDataCompB1.h"

ABGGGameStateB1::ABGGGameStateB1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BGSDataComp = CreateDefaultSubobject<UBGG_GameStateDataCompB1>(TEXT("GameStateDataCompB1"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
}


