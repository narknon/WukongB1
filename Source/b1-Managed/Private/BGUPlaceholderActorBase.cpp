#include "BGUPlaceholderActorBase.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_PlaceholderActorConfigComp.h"
#include "BUS_PlaceholderActorDataComp.h"

ABGUPlaceholderActorBase::ABGUPlaceholderActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_PlaceholderActorDataComp>(TEXT("PlaceholderActorComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->PlaceholderActorConfig = CreateDefaultSubobject<UBUS_PlaceholderActorConfigComp>(TEXT("PlaceholderActorConfigComp"));
}


