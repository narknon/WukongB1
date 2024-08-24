#include "ActorCompContainerCS.h"

UActorCompContainerCS::UActorCompContainerCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUserForUnit = false;
}

void UActorCompContainerCS::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void UActorCompContainerCS::ApplyWorldOffsetCS_Implementation(const FVector& InOffset, bool bWorldShift) {
}


