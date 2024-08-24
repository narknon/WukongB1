#include "BGUShadowActorStaticBase.h"
#include "Components/StaticMeshComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"
#include "BUS_ShadowActorDataComp.h"

ABGUShadowActorStaticBase::ABGUShadowActorStaticBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_ShadowActorDataComp>(TEXT("ShadowActorDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->BodyMesh = (UStaticMeshComponent*)RootComponent;
    this->HeadMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadMesh"));
    this->ArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmMesh"));
    this->FootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FootMesh"));
    this->WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
    this->HuluMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HuluMesh"));
    this->TailMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TailMesh"));
    this->HairMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HairMesh"));
    this->ArmMesh->SetupAttachment(RootComponent);
    this->FootMesh->SetupAttachment(RootComponent);
    this->HairMesh->SetupAttachment(RootComponent);
    this->HeadMesh->SetupAttachment(RootComponent);
    this->HuluMesh->SetupAttachment(RootComponent);
    this->TailMesh->SetupAttachment(RootComponent);
    this->WeaponMesh->SetupAttachment(RootComponent);
}


