#include "B1X2_DispWorld.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "B1X2_DispWorldDataComp.h"

AB1X2_DispWorld::AB1X2_DispWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->DataComp = CreateDefaultSubobject<UB1X2_DispWorldDataComp>(TEXT("UBGUDataComp"));
}

void AB1X2_DispWorld::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}


