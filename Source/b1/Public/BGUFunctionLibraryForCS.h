#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Particles/WorldPSCPool.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "KismetProceduralMeshLibrary.h"
#include "ProceduralMeshComponent.h"
#include "EBBKeyType.h"
#include "GSFloatValueTableRow.h"
#include "GSSweepCheckShapeInfo.h"
#include "BGUFunctionLibraryForCS.generated.h"

class AActor;
class ABGUAIController;
class ABGUCharacter;
class ACharacter;
class ALandscape;
class UActorComponent;
class UAnimInstance;
class UBlackboardKeyType;
class UDataTable;
class UDecalComponent;
class UHitMoveOverlapOtherActorCollisionsInfo;
class ULevelSequencePlayer;
class UMaterialInterface;
class UMovementComponent;
class UObject;
class UPaperSprite;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicsAsset;
class UPrimitiveComponent;
class UProceduralMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable)
class B1_API UBGUFunctionLibraryForCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFunctionLibraryForCS();

    UFUNCTION(BlueprintCallable)
    static void ValidateMontagesForCrossSectionNS(const FString& ResourcePath);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag RequestGameplayTag(FName TagName, bool ErrorIfNotFound);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllQueriesByQuerier(UObject* Querier);
    
    UFUNCTION(BlueprintCallable)
    void OnSetLevelsStateFinishedPlaceHolder(const FString& InTargetLevelsKeyword, const FString& InTargetLevelState, int32 InOperationID);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHitPlaceholder(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector HitImpule, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentEndOverlapPlaceholder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlapPlaceholder(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAllSetLevelsStateFinishedPlaceHolder();
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapPlaceholder(AActor* OverlapActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapPlaceholder(AActor* OverlapActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    static void CopyProceduralMeshFromStaticMeshComponent(UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ECollisionChannel> ConvertTraceTypeToCollisionChannel(TEnumAsByte<ETraceTypeQuery> TraceType);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ETraceTypeQuery> ConvertToTraceType(TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EObjectTypeQuery> ConvertToObjectType(TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ECollisionChannel> ConvertObjectTypeToCollisionChannel(TEnumAsByte<EObjectTypeQuery> ObjectType);
    
    UFUNCTION(BlueprintCallable)
    static bool CompForceUpdateOverlaps(UPrimitiveComponent* Comp, bool bDoNotifies);
    
    UFUNCTION(BlueprintCallable)
    static void CallSectionManuallyChangeOnCrossSectionNotifies(ABGUCharacter* OwnerChar, const FName& NewSectionName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnSetLevelsStateFinished(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnComponentHitEvent(UPrimitiveComponent* Comp, UObject* Obj, FName Func);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnComponentEndOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnComponentBeginOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnAllSetLevelsStateFinished(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUTeleportTo(AActor* Owner, const FVector& DestLocation, const FRotator& DestRotation, bool bIsATest, bool bNoCheck);
    
    UFUNCTION(BlueprintCallable)
    static UDecalComponent* BGUSpawnDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSliceProceduralMesh(UProceduralMeshComponent* InProcMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, UProceduralMeshComponent*& OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetParticleSysSortPriority(UParticleSystemComponent* ParticleSystemComp, int32 SortPriority);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetParticleSysCompPoolingMethod(UParticleSystemComponent* ParticleComp, EPSCPoolMethod PoolMethod);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetIKComponentValid(ACharacter* Character, bool NewValid);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetDecalSize(UDecalComponent* DecalComp, FVector Size);
    
    UFUNCTION(BlueprintCallable)
    static void BGURestartBT(ABGUAIController* AIController);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGURegistComp(UObject* WorldContextObject, UActorComponent* ActorComp);
    
    UFUNCTION(BlueprintCallable)
    static float BGUMovementComponentSlideAlongSurface(UMovementComponent* MoveComp, const FVector& Delta, float Time, const FVector& Normal, const FHitResult& InHit, bool bHandleImpact, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUMovementComponentHandleImpact(UMovementComponent* MoveComp, const FHitResult& Hit, float TimeSlice, const FVector& MoveDelta);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUIsBlackBoardKeyTypeMatch(UBlackboardKeyType* BBKey, EBBKeyType BBKeyType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* BGUGetUWorld(UObject* InnerObject);
    
    UFUNCTION(BlueprintCallable)
    static void BGUGetSectionFromProceduralMesh(UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<FVector>& Vertices, TArray<int32>& Triangles, TArray<FVector>& Normals, TArray<FVector2D>& UVs, TArray<FProcMeshTangent>& Tangents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUGetParticleSystemIsLooping(const UParticleSystem* ParticleForPlay);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetPARadiusByBoneName(UPhysicsAsset* PA, FName BoneName, float& BodyRadius);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D BGUGetPaperSpriteSize(UPaperSprite* PaperSprite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BGUGetMeshPredictedLODLevel(USkeletalMeshComponent* MeshComp);
    
    UFUNCTION(BlueprintCallable)
    static float BGUGetLevelSequenceLength(ULevelSequencePlayer* LeveleSequencePlayer);
    
    UFUNCTION(BlueprintCallable)
    static float BGUGetLevelSequenceCurTime(ULevelSequencePlayer* LeveleSequencePlayer);
    
    UFUNCTION(BlueprintCallable)
    static void BGUGetLandscapeExtent(ALandscape* Landscape, int32& MinX, int32& MinY, int32& MaxX, int32& MaxY);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUGetIsRuntionShowCollision(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUGetIsInGameWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BGUGetIsInEditorPreview(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUGetIsEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool BGUGetIsBuildShipping();
    
    UFUNCTION(BlueprintCallable)
    static bool BGUGetFloatValueTableRow(UDataTable* DataTable, FName RowName, FGSFloatValueTableRow& Result, const FString& ContextString, bool bWarnIfRowMissing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float BGUGetCurrentTime(UObject* WorldContextObject, bool& IsValid);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetCurActiveMontageInstID(UAnimInstance* AnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static void BGUGetBounds(UPrimitiveComponent* PrimComp, FVector& Origin, FVector& BoxExtent);
    
    UFUNCTION(BlueprintCallable)
    static float BGUGetBodyRadius(USkeletalMeshComponent* SkMeshComp, FName BoneName, bool bGetWelded);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> BGUGetAllActorsFromGroupActor(AActor* GroupActor, bool bRecurse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUGetAIStimulusWasSuccessfullySensed(FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    static FString BGUGetActorLevelName(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUExceutePyCode(const FString& PyPath);
    
    UFUNCTION(BlueprintCallable)
    static void BGUEnableActorTick(AActor* Actor, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void BguDrawSweepCheckShapeWithColor(const UWorld* World, const FVector& CenterPos, const FQuat& Rot, const FGSSweepCheckShapeInfo& SweepCheckShapeInfo, const FColor& Color);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawSweepCheckShape(const UWorld* World, const FVector& CenterPos, const FQuat& Rot, const FGSSweepCheckShapeInfo& SweepCheckShapeInfo);
    
    UFUNCTION(BlueprintCallable)
    static void BguDrawSphereSweepWithColor(const UWorld* World, const FTransform& Start, const FTransform& End, float Radius, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawSphereSweep(const UWorld* World, const FTransform& Start, const FTransform& End, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawLineArrowEx(const UWorld* World, const FVector& LineStart, const FVector& LineEnd, float ArrowSize, FColor Color, bool IsPersistentLines, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawLineArrow(const UWorld* World, const FVector& LineStart, const FVector& LineEnd, float ArrowSize);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawDebugSphereEx(const UWorld* World, const FVector& CenterPos, float Raidus, float KeepTime, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawDebugSphere(const UWorld* World, const FVector& CenterPos, float Raidus);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawDebugRect(const UWorld* World, const FVector& CenterPos, const FVector& Direction, float Width, float Length);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawDebugCircleEx(const UWorld* World, const FVector& CenterPos, float Raidus, float KeepTime, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawDebugCircle(const UWorld* World, const FVector& CenterPos, float Raidus);
    
    UFUNCTION(BlueprintCallable)
    static void BGUDrawDebugAnnularSector(const UWorld* World, const FVector& CenterPos, const FVector& Direction, float InnerRadius, float OuterRadius, float HalfAngle, FColor Color, float Duration, float Thickness, int32 Segments);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* BGUCreateLandscapeHeightMap(ALandscape* Landscape, const FString& PackageName, const FString& AssetName);
    
    UFUNCTION(BlueprintCallable)
    static FVector BGUComputeActorHitMovePenetration(AActor* SelfActor, TArray<UHitMoveOverlapOtherActorCollisionsInfo*> OverlappedOtherActorInfos, float SelfWeight, FVector PlaneNormalVector, int32 MaxComputeRound, float Epsilon);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnSetLevelsStateFinished(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnComponentHitEvent(UPrimitiveComponent* Comp, UObject* Obj, FName Func);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnComponentEndOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnComponentBeginOverlapEvent(UPrimitiveComponent* Comp, UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnAllSetLevelsStateFinished(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnActorEndOverlapEvent(AActor* Actor, UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnActorBeginOverlapEvent(AActor* Actor, UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void AddNotifyPreloadedAsset(UObject* Notify, UObject* Asset);
    
};

