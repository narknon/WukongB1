#include "PrefabricatorBlueprintLibrary.h"

UPrefabricatorBlueprintLibrary::UPrefabricatorBlueprintLibrary() {
}

void UPrefabricatorBlueprintLibrary::UnlinkPrefab(APrefabActor* PrefabActor) {
}

APrefabActor* UPrefabricatorBlueprintLibrary::SpawnPrefab(const UObject* WorldContextObject, UPrefabricatorAssetInterface* Prefab, const FTransform& Transform, int32 Seed) {
    return NULL;
}

void UPrefabricatorBlueprintLibrary::SetPrefabAsset(APrefabActor* PrefabActor, UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab) {
}

void UPrefabricatorBlueprintLibrary::RandomizePrefab(APrefabActor* PrefabActor, const FRandomStream& InRandom) {
}

void UPrefabricatorBlueprintLibrary::GetAllAttachedActors(AActor* Prefab, TArray<AActor*>& AttachedActors) {
}

APrefabActor* UPrefabricatorBlueprintLibrary::FindTopMostPrefabActor(AActor* InActor) {
    return NULL;
}


