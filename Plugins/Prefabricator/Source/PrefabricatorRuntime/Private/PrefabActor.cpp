#include "PrefabActor.h"
#include "PrefabComponent.h"

APrefabActor::APrefabActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPrefabComponent>(TEXT("PrefabComponent"));
    this->PrefabComponent = (UPrefabComponent*)RootComponent;
    this->Seed = 0;
}

void APrefabActor::SavePrefab() {
}

void APrefabActor::RandomizeSeed(const FRandomStream& InRandom, bool bRecursive) {
}

void APrefabActor::LoadPrefab() {
}

bool APrefabActor::IsPrefabOutdated() {
    return false;
}

UPrefabricatorAsset* APrefabActor::GetPrefabAsset() {
    return NULL;
}


