#include "BGUAiWeakInteractionActorBase.h"
#include "Components/SceneComponent.h"
#include "ActorCompContainer.h"
#include "BGUDebugSectorComponent.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_AiWeakInteractComp.h"
#include "BUS_AiWeakInteractionDataComp.h"
#include "BUS_GuidComp.h"
#include "BUS_SaveInitDataComp.h"

ABGUAiWeakInteractionActorBase::ABGUAiWeakInteractionActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComp"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_AiWeakInteractionDataComp>(TEXT("AiWeakInteractionDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->DefaultRootComp = (USceneComponent*)RootComponent;
    this->AiWeakInteractComp = CreateDefaultSubobject<UBUS_AiWeakInteractComp>(TEXT("AiWeakInteractComp"));
    this->InteractRangeDebugComp = CreateDefaultSubobject<UBGUDebugSectorComponent>(TEXT("InteractRangeDebugComp"));
    this->InteractRangeDebugComp->SetupAttachment(RootComponent);
}

void ABGUAiWeakInteractionActorBase::OnConstructionCS_Implementation(const FTransform& Transform) {
}


