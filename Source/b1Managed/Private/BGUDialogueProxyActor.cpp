#include "BGUDialogueProxyActor.h"
#include "AkComponent.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_DialogueProxyDataComp.h"

ABGUDialogueProxyActor::ABGUDialogueProxyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak"));
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_DialogueProxyDataComp>(TEXT("DialogueProxyDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->AkComp = (UAkComponent*)RootComponent;
}

void ABGUDialogueProxyActor::OnConstructionCS_Implementation(const FTransform& Transform) {
}


