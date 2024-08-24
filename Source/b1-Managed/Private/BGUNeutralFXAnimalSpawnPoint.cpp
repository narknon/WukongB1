#include "BGUNeutralFXAnimalSpawnPoint.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_NeutralFXAnimalSpawnConfigComp.h"
#include "BUS_NeutralFXAnimalSpawnPointDataComp.h"
#include "BUS_SaveInitDataComp.h"

ABGUNeutralFXAnimalSpawnPoint::ABGUNeutralFXAnimalSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_NeutralFXAnimalSpawnPointDataComp>(TEXT("NeutralFXAnimalSpawnPointDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->Root = (USceneComponent*)RootComponent;
    this->ConfigComp = CreateDefaultSubobject<UBUS_NeutralFXAnimalSpawnConfigComp>(TEXT("ModularMgrConfigComp"));
    this->TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
    this->TriggerBox_OutSide = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox_OutSide"));
    this->TriggerBox->SetupAttachment(RootComponent);
    this->TriggerBox_OutSide->SetupAttachment(RootComponent);
}


