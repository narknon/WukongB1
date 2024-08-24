#include "BGG_GameModeStartUp.h"
#include "ActorCompContainerCS.h"
#include "BGG_GameModeDataCompStartUp.h"

ABGG_GameModeStartUp::ABGG_GameModeStartUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataComp = CreateDefaultSubobject<UBGG_GameModeDataCompStartUp>(TEXT("GameModeDataCompStartUp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->GameDefaultMapID = 0;
}

void ABGG_GameModeStartUp::BeginPlayCS_Implementation() {
}


