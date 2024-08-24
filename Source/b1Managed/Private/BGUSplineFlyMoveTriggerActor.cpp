#include "BGUSplineFlyMoveTriggerActor.h"
#include "Components/BoxComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"
#include "BUS_SplineFlyMoveTriggerConfigComp.h"
#include "BUS_SplineFlyMoveTriggerDataComp.h"

ABGUSplineFlyMoveTriggerActor::ABGUSplineFlyMoveTriggerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_SplineFlyMoveTriggerDataComp>(TEXT("SplineFlyMoveTriggerDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BeginBox"));
    this->EndTriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("EndBox"));
    this->SplineFlyMoveTriggerConfigComp = CreateDefaultSubobject<UBUS_SplineFlyMoveTriggerConfigComp>(TEXT("SplineFlyMoveTriggerConfigComp"));
}

