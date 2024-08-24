#include "BGUTransPreviewActorBase.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_CharacterModularComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"
#include "BUS_TransPreviewActorDataComp.h"

ABGUTransPreviewActorBase::ABGUTransPreviewActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComp"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_TransPreviewActorDataComp>(TEXT("TransPreviewActorDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
    this->NormalLight = CreateDefaultSubobject<USceneComponent>(TEXT("NormalLight"));
    this->Light = CreateDefaultSubobject<USceneComponent>(TEXT("Light"));
    this->DefaultRootComp = (USceneComponent*)RootComponent;
    this->AttachComp = CreateDefaultSubobject<USceneComponent>(TEXT("AttachPoint"));
    this->CharacterModularComp = CreateDefaultSubobject<UBUS_CharacterModularComp>(TEXT("CharacterModularComp"));
    this->AttachComp->SetupAttachment(RootComponent);
    this->Light->SetupAttachment(AttachComp);
    this->Mesh->SetupAttachment(AttachComp);
    this->NormalLight->SetupAttachment(RootComponent);
}

void ABGUTransPreviewActorBase::OnConstructionCS_Implementation(const FTransform& Transform) {
}


