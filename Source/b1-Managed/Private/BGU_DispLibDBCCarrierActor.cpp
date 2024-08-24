#include "BGU_DispLibDBCCarrierActor.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BGU_DispLibDBCCarrierActorDataComp.h"

ABGU_DispLibDBCCarrierActor::ABGU_DispLibDBCCarrierActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    this->DataComp = CreateDefaultSubobject<UBGU_DispLibDBCCarrierActorDataComp>(TEXT("UBGUDataComp"));
}

void ABGU_DispLibDBCCarrierActor::ApplyWorldOffsetCS_Implementation(const FVector& InOffset, bool bWorldShift) {
}

void ABGU_DispLibDBCCarrierActor::PostInitializeComponentsCS_Implementation() {
}


