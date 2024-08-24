#include "BGUBulletBaseCS.h"
#include "Components/StaticMeshComponent.h"
#include "ActorCompContainer.h"
#include "BGUProjectileMovementComponent.h"
#include "ActorCompContainerCS.h"
#include "BUS_BulletDataComp.h"
#include "BUS_ProjectileConfigInfoComp.h"

ABGUBulletBaseCS::ABGUBulletBaseCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->RemoteRole = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticComp"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_BulletDataComp>(TEXT("BulletDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->ProjectileMovement = CreateDefaultSubobject<UBGUProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->StaticComp = (UStaticMeshComponent*)RootComponent;
    this->ProjectileConfigInfoComp = CreateDefaultSubobject<UBUS_ProjectileConfigInfoComp>(TEXT("ProjectileConfigInfoComp"));
}

void ABGUBulletBaseCS::BulletDataMigrateTool() {
}


