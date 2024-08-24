#include "PrefabSeedLinker.h"
#include "PrefabSeedLinkerComponent.h"

APrefabSeedLinker::APrefabSeedLinker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPrefabSeedLinkerComponent>(TEXT("SeedLinker"));
    this->SeedLinkerComponent = (UPrefabSeedLinkerComponent*)RootComponent;
}


