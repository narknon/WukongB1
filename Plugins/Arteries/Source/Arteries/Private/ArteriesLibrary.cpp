#include "ArteriesLibrary.h"
#include "Templates/SubclassOf.h"

UArteriesLibrary::UArteriesLibrary() {
}

AArteriesActor* UArteriesLibrary::FinishSpawningActor(AArteriesActor* Actor, bool AttachToCaller) {
    return NULL;
}

AArteriesActor* UArteriesLibrary::BeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AArteriesActor> ActorClass, const FTransform& SpawnTransform) {
    return NULL;
}


