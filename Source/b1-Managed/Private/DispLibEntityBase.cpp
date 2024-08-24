#include "DispLibEntityBase.h"

ADispLibEntityBase::ADispLibEntityBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainerCS = NULL;
    this->DataComp = NULL;
}

void ADispLibEntityBase::ReceiveBeginPlay_Implementation() {
}

void ADispLibEntityBase::ApplyWorldOffsetCS_Implementation(const FVector& InOffset, bool bWorldShift) {
}

void ADispLibEntityBase::PostInitializeComponentsCS_Implementation() {
}


