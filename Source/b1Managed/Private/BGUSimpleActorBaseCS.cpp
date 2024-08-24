#include "BGUSimpleActorBaseCS.h"

ABGUSimpleActorBaseCS::ABGUSimpleActorBaseCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataComp = NULL;
    this->ActorCompContainerCS = NULL;
}

void ABGUSimpleActorBaseCS::BeginPlayCS_Implementation() {
}

void ABGUSimpleActorBaseCS::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGUSimpleActorBaseCS::ReceiveDestroyed_Implementation() {
}

void ABGUSimpleActorBaseCS::PostInitializeComponentsCS_Implementation() {
}


