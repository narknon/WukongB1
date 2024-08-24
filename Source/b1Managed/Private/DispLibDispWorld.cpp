#include "DispLibDispWorld.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "DispLibDispWorldDataComp.h"

ADispLibDispWorld::ADispLibDispWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->DataComp = CreateDefaultSubobject<UDispLibDispWorldDataComp>(TEXT("DispLibDispWorldDataComp"));
    this->WEFMManager = NULL;
    this->WEFM_VisualDebugFX = NULL;
}

void ADispLibDispWorld::BeginPlayCS_Implementation() {
}

void ADispLibDispWorld::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}


