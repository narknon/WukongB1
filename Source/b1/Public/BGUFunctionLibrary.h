#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/RealCurve.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "UStGSHitResult.h"
#include "BGUFunctionLibrary.generated.h"

class AActor;
class ABGUCharacter;
class ACharacter;
class AController;
class ANavigationData;
class APlayerController;
class AVolume;
class UActorComponent;
class UAnimMontage;
class UCurveFloat;
class UCurveVector;
class UGeometryCollectionComponent;
class ULevel;
class ULevelStreaming;
class UMaterialInstance;
class UMeshComponent;
class UNavigationQueryFilter;
class UObject;
class UPrimitiveComponent;
class UShapeComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USphereComponent;
class UTressFXAsset;
class UTressFXComponent;
class UWorld;

UCLASS(Blueprintable)
class B1_API UBGUFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FUStGSHitResult WrapHitResult(FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable)
    static bool VolumeEncompassPoint(AVolume* Volume, const FVector& Point, float SphereRadius, float& OutDistanceToPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SphereComponentInitRadius(USphereComponent* SphereComp, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalKinematics(USkeletalMeshComponent* TargetMesh, bool NewBool);
    
    UFUNCTION(BlueprintCallable)
    static void SetIKValid(ACharacter* Character, bool NewValid);
    
    UFUNCTION(BlueprintCallable)
    static void SetBodyBonePhysic(USkeletalMeshComponent* TargetMesh, FName BoneName, bool NewBool);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllBodiesBelowSimulatePhysics(USkeletalMeshComponent* TargetMesh, const FName& InBoneName, bool bNewSimulate, bool bIncludeSelf, bool bSkipCustomPhysicsType);
    
    UFUNCTION(BlueprintCallable)
    static void SerializeActorComponentToLevelActor(AActor* TargetLevelActor, UActorComponent* InActorComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveLevelStreaming(UObject* WorldContextObject, const FName& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActorComponentFromLevelActor(AActor* TargetLevelActor, UActorComponent* InActorComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MoveLevel(UObject* WorldContextObject, const FName& LevelName, FVector InWorldOffset, bool bActorOnly);
    
    UFUNCTION(BlueprintCallable)
    FName MakeUniqueTamerMonsterName(ULevel* SpawnLevel, FName InBaseName);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetStreamingVolumeBounds(ULevelStreaming* LevelStreaming);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ACharacter* GetPlayerCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FName GetNearestBoneName(USkeletalMeshComponent* TargetSkeletalMesh, const FVector& WorldPosition, TArray<FString> OptionalWhiteList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static uint8 GetLevelStreamingState(UObject* WorldContextObject, const FName& LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FTransform GetLevelStreamingLevelTransformByName(UObject* WorldContextObject, const FName& LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ULevelStreaming*> GetLevelStreamingFromWorld(const UWorld* World);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ULevelStreaming*> GetLevelStreaming(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FName GetAssetLongPackageName(const FName& ClassName, const FString& AssetName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllAssetReference(FName SelectedPackageName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetAllAssetDependencies(FName SelectedPackageName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetAllActorsInWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetAllActorsInLevel(ULevel* Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ForceLoadTileLOD(UObject* WorldContext, const FString& TileName, int32 SwitchOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugString(const UObject* WorldContextObject, const FVector TextLocation, const FString& Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateMontageCostValue(const TArray<UAnimMontage*> MontageList, const TArray<FName> BoneNameList);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> BonesSphereMask(USkeletalMeshComponent* TargetSkeletalMesh, float Radius, FVector WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    static void BGUWoodTestCharacter(AActor* Character, UAnimMontage* Montage, float ScaleRate);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUpdateLevelStreaming(UWorld* CurWorld);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUUnloadStreamLevel(UObject* WorldContextObject, const FName& LevelName, bool bShouldBlockOnUnload, UObject* CallbackTarget, const FName& CallbackFunc, int32 ActionID, int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUSKMeshContainSocket(USkeletalMeshComponent* SkMeshComp, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUShapeSweepMultiByObjectType(const UShapeComponent* ShapeComp, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, TArray<FHitResult>& OutHits, bool bIgnoreSelf);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetValueToCurveVector(UCurveVector* CurveVector, float Key, FVector Value, TEnumAsByte<ERichCurveInterpMode> InterpMode);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetValueToCurveFloat(UCurveFloat* CurveFloat, float Key, float Value, TEnumAsByte<ERichCurveInterpMode> InterpMode);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTressFXAssetAndMaterial(UTressFXComponent* TFXComp, UTressFXAsset* Asset, UMaterialInstance* Material);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetLinearColorParameterValueToMesh(UMeshComponent* MeshInst, const FName ParameterName, const FLinearColor LinearColorParameterValue);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetEnableGravity(USkeletalMeshComponent* TargetMesh, bool bEnableGravity);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUSetActiveMontagePosition(const ABGUCharacter* Character, const UAnimMontage* Montage, const float position);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUSeparatingAxisPointCheck(const TArray<FVector>& InPolyVertices, const FVector& InBoxCenter, const FVector& InBoxExtent, bool bInCalcLeastPenetration);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSaveUnitAttrToFile(const FString& Name, const FString& Text, bool Overwrite);
    
    UFUNCTION(BlueprintCallable)
    static void BGUResetToDefaultBoomCameraLagSpeed(AActor* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    static void BGUResetGeometryCollectionComponent(UGeometryCollectionComponent* GeometryCollectionComponent);
    
    UFUNCTION(BlueprintCallable)
    static void BGUResetActorVelocity(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void BGURenameActorComponent(UActorComponent* Comp, const FString& NewName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUProcessLatentActions(UObject* WorldContextObject, UObject* InObject, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUPlayerCtrlerGetViewPoint(APlayerController* PlayerCtrler, FVector& out_Location, FRotator& out_Rotation);
    
    UFUNCTION(BlueprintCallable)
    static float BGUPerlinNoise1D(float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUNavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUNavigationCalPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, AController* Querier);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUMergeSkeletalMesh(USkeletalMesh* InMergeMesh, const TArray<USkeletalMesh*>& InSrcMeshList, int32 StripTopLODS, EMeshBufferAccess MeshBufferAccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGULoadStreamLevel(UObject* WorldContextObject, const FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, UObject* CallbackTarget, const FName& CallbackFunc, int32 ActionID, int32 Linkage);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUIsExistFile(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUHasFuncName(FName FuncName, UObject* Object, UClass* StopAtClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void BGUGetWindParameters_GameThread(AActor* WorldContext, FVector& position, FVector& OutDirection, float& OutSpeed, float& OutMinGustAmt, float& OutMaxGustAmt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BGUGetTeamID(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetSkeletalMeshSimulatedBodiesBelowNum(USkeletalMeshComponent* SkeletalMesh, FName BoneName, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    static float BGUGetMontageSectionTimeLeftFromPos(AActor* Unit, UAnimMontage* AnimMontage, float position);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUGetMontageSectionStartAndEndTime(UAnimMontage* AnimMontage, FName SectionName, float& OutStartTime, float& OutEndTime);
    
    UFUNCTION(BlueprintCallable)
    static float BGUGetMontageSectionLengthByName(AActor* Unit, UAnimMontage* AnimMontage, FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    static float BGUGetMontageSectionLengthByIndex(AActor* Unit, UAnimMontage* AnimMontage, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BGUGetHitResultActor(const FActorInstanceHandle& ActorInstanceHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUGetAllActorsWithTagInRangeSorted(AActor* CenterActor, FName TagName, int32 Range, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static float BGUGetActiveMontagePosition(const ABGUCharacter* Actor, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* BGUGenProceduralLevel(UObject* WorldContextObject, const FName& WorldAssetName, const FName& InLevelName, FTransform InLevelTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* BGUGenComponentAndAdd(AActor* Actor, TSubclassOf<UActorComponent> ActorComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* BGUGenComponent(AActor* Actor, TSubclassOf<UActorComponent> ActorComponentClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUFlushLevelStreamingOnlyVisibility(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BGUFinishSpawningActor(AActor* Actor, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* BGUFindFirstActorWithTag(const UObject* WorldContextObject, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUCalcBounds(UPrimitiveComponent* StaticMesh, FVector& Origin, FVector& BoxExtent, float& SphereRadius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* BGUBeginDeferredActorSpawnFromClassWithName(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, FName ActorName, ULevel* OverrideLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* BGUBeginDeferredActorSpawnFromClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void BGUActorUpdateAllTFXComp(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyLevelTransform(UObject* WorldContextObject, const FName& LevelName, FTransform LevelTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName AddLevelStreaming(UObject* WorldContextObject, const FName& LevelName, const FVector Location, const FRotator Rotation, bool bShouldBlockOnLoad);
    
};

