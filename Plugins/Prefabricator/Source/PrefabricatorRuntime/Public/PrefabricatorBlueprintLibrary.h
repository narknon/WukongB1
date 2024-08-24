#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PrefabricatorBlueprintLibrary.generated.h"

class AActor;
class APrefabActor;
class UObject;
class UPrefabricatorAssetInterface;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPrefabricatorBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnlinkPrefab(APrefabActor* PrefabActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static APrefabActor* SpawnPrefab(const UObject* WorldContextObject, UPrefabricatorAssetInterface* Prefab, const FTransform& Transform, int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    static void SetPrefabAsset(APrefabActor* PrefabActor, UPrefabricatorAssetInterface* Prefab, bool bReloadPrefab);
    
    UFUNCTION(BlueprintCallable)
    static void RandomizePrefab(APrefabActor* PrefabActor, const FRandomStream& InRandom);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAttachedActors(AActor* Prefab, TArray<AActor*>& AttachedActors);
    
    UFUNCTION(BlueprintCallable)
    static APrefabActor* FindTopMostPrefabActor(AActor* InActor);
    
};

