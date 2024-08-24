#include "BGUMagicFieldBaseCS.h"
#include "Components/StaticMeshComponent.h"
#include "ActorCompContainer.h"
#include "BGUProjectileMovementComponent.h"
#include "ActorCompContainerCS.h"
#include "BUS_MagicFieldDataComp.h"
#include "BUS_ProjectileConfigInfoComp.h"

ABGUMagicFieldBaseCS::ABGUMagicFieldBaseCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->RemoteRole = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticComp"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_MagicFieldDataComp>(TEXT("MagicFieldDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->ProjectileMovement = CreateDefaultSubobject<UBGUProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->StaticComp = (UStaticMeshComponent*)RootComponent;
    this->ProjectileConfigInfoComp = CreateDefaultSubobject<UBUS_ProjectileConfigInfoComp>(TEXT("ProjectileConfigInfoComp"));
}

void ABGUMagicFieldBaseCS::MagicFieldDataMigrateTool() {
}


