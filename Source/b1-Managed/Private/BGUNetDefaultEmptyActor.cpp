#include "BGUNetDefaultEmptyActor.h"
#include "ActorCompContainerCS.h"
#include "BUS_BGUDataComp.h"

ABGUNetDefaultEmptyActor::ABGUNetDefaultEmptyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BGUDataComp = CreateDefaultSubobject<UBUS_BGUDataComp>(TEXT("UBGUDataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
}

void ABGUNetDefaultEmptyActor::ReceiveTick_Implementation(float DeltaSeconds) {
}

void ABGUNetDefaultEmptyActor::OnPossessedCS_Implementation(AController* NewController) {
}

void ABGUNetDefaultEmptyActor::OnConstructionCS_Implementation(const FTransform& Transform) {
}

void ABGUNetDefaultEmptyActor::ReceiveBeginPlay_Implementation() {
}

void ABGUNetDefaultEmptyActor::PostInitializeComponentsCS_Implementation() {
}


