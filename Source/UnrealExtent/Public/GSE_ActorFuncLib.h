#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "GSE_ActorFuncLib.generated.h"

class AActor;
class AVolume;
class UActorComponent;
class UBlueprint;
class ULevel;
class UMaterialInterface;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_ActorFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_ActorFuncLib();

    UFUNCTION(BlueprintCallable)
    static void UpdateActorOverlaps(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void StatLevelNaniteMemory(TArray<ULevel*> LoadedLevels, const FString& WorldPositionFile, const FString& MemoryFile);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnSphereUniformPoints(TArray<FVector>& SphereUniformPoints, int32 NumOfPoints, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnBlueprintActorByFactory_BP(UBlueprint* InAsset, UObject* Obj, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnBlueprintActorByFactory(UBlueprint* InAsset, ULevel* InLevel, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialInterfaceQualityLevel(AActor* Actor, UMaterialInterface* Material, int32 QualityLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorTransformSimple(AActor* Actor, FTransform Trans, bool bSweep, int32 iTeleportType);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorRotationSimple(AActor* Actor, FRotator Rot, int32 iTeleportType);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorLocationSimple(AActor* Actor, FVector Pos, bool bSweep, int32 iTeleportType);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorLocationAndRotationSimple(AActor* Actor, FVector Pos, FRotator Rot, bool bSweep, int32 iTeleportType);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorComponentsTickInterval(AActor* Actor, float NewInterval);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorComponentsTickEnable(AActor* Actor, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void LoadReflectionCubeLocation(TArray<FVector>& PathPointList, const FString& FilePathUnderProjFolder);
    
    UFUNCTION(BlueprintCallable)
    static void LoadCapturingStreamingMeshLodStats();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPointInVolume(AVolume* VolumeActor, const FVector& Point, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorBeginningPlayFromLevelStreaming(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAABoundBoxInVolume(AVolume* VolumeActor, const FVector& BoundOrigin, const FVector& BoundExtent, bool& isFullContain);
    
    UFUNCTION(BlueprintCallable)
    static void GetWorldTransformFast(USceneComponent* SceneComp, FTransform& OutWorldTransform);
    
    UFUNCTION(BlueprintCallable)
    static void GetVelocity(AActor* Actor, FVector& OutVelocity);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttachParentActor(AActor* Actor, AActor* AttachParentActor);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorTransformSimple(AActor* Actor, FTransform& OutTrans);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorRotationSimple(AActor* Actor, FRotator& OutRot);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorLocationSimple(AActor* Actor, FVector& OutPos);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorHasAuthority(AActor* Actor, bool& OutHasAuthority);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorForwardVector(AActor* Actor, FVector& OutDir);
    
    UFUNCTION(BlueprintCallable)
    static void FinishAddComponent(AActor* Actor, UActorComponent* NewActorComp, bool bManualAttachment, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    static void ExcuteStreamingMeshMemoryStats();
    
    UFUNCTION(BlueprintCallable)
    static void EndCapturingStreamingMeshLodStats();
    
    UFUNCTION(BlueprintCallable)
    static void DetectRegionCenter(AActor* Actor, TArray<FVector> TraceDirectionList, float TraceDistance, TEnumAsByte<ETraceTypeQuery> TraceChannel, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, float DrawTime, float VaildRange, FVector& AdjustedLocation, double& AdjustedRadius, bool& IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckActorWasRecentlyRendered(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void CaptureStreamingMeshLodStats();
    
    UFUNCTION(BlueprintCallable)
    static void CacheCapturingStreamingMeshLodStats();
    
    UFUNCTION(BlueprintCallable)
    static void AddNamePrefix(AActor* Actor, const FString& NamePrefix);
    
    UFUNCTION(BlueprintCallable)
    static void AddInstanceComponent(AActor* Actor, UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddComponentByClass(AActor* Actor, TSubclassOf<UActorComponent> Class, bool bManualAttachment, const FTransform& RelativeTransform, bool bDeferredFinish);
    
};

