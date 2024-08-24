#include "BGUSceneItemBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"
#include "BUS_SceneItemCommComp.h"
#include "BUS_SceneItemDataComp.h"

ABGUSceneItemBase::ABGUSceneItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_SceneItemDataComp>(TEXT("SceneItemDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->StaticMeshComp = (UStaticMeshComponent*)RootComponent;
    this->SceneItemCommComp = CreateDefaultSubobject<UBUS_SceneItemCommComp>(TEXT("SceneItemCommComp"));
    this->SphereCollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->BoxCollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->CapsuleCollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    this->BoxCollisionComp->SetupAttachment(RootComponent);
    this->CapsuleCollisionComp->SetupAttachment(RootComponent);
    this->SphereCollisionComp->SetupAttachment(RootComponent);
}

void ABGUSceneItemBase::BeginPlayCS_Implementation() {
}


