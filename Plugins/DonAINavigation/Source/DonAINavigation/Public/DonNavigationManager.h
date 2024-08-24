#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "DoNNavigationDebugParams.h"
#include "DoNNavigationQueryData.h"
#include "DoNNavigationQueryParams.h"
#include "DoNNavigationResultHandlerDelegate.h"
#include "DonCollisionSamplerCallbackDelegate.h"
#include "DonNavigationDynamicCollisionDelegateDelegate.h"
#include "DonNavigationPathFindingResult.h"
#include "DonNavigationManager.generated.h"

class UBillboardComponent;
class UBoxComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class DONAINAVIGATION_API ADonNavigationManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 YGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ZGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoNNavigationDebugParams ManagerDebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> ObstacleQueryChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnoreForCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> AutoCorrectionGuessList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnrealPhyxPenetrationDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PerformCollisionChecksOnStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultiThreadingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPathSolverIterationsPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCollisionSolverIterationsPerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPathSolverIterationsOnThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCollisionSolverIterationsOnThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPathSolverIterationsPerTick_Unbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCollisionSolverIterationsPerTick_Unbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPathSolverIterationsOnThread_Unbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCollisionSolverIterationsOnThread_Unbound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* WorldBoundaryVisualizer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayWorldBoundary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayWorldBoundaryInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugVoxelsLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunDebugValidationsForDynamicCollisions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> ActiveNavigationTaskOwners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> ActiveCollisionTaskOwners;
    
public:
    ADonNavigationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void VisualizeNavResult(const TArray<FVector>& PathSolution, FVector Source, FVector Destination, bool Reset, const FDoNNavigationDebugParams& DebugParams, const FColor& LineColor);
    
    UFUNCTION(BlueprintCallable)
    void VisualizeDynamicCollisionListeners(FDonNavigationDynamicCollisionDelegate Listener, FDoNNavigationQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningToDynamicCollisionsForPathIndex(FDonNavigationDynamicCollisionDelegate ListenerToClear, const FDoNNavigationQueryData& QueryData, const int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningToDynamicCollisionsForPath(FDonNavigationDynamicCollisionDelegate ListenerToClear, const FDoNNavigationQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    bool SchedulePathfindingTask(AActor* Actor, FVector Destination, const FDoNNavigationQueryParams& QueryParams, const FDoNNavigationDebugParams& DebugParams, FDoNNavigationResultHandler ResultHandlerDelegate, FDonNavigationDynamicCollisionDelegate DynamicCollisionListener);
    
    UFUNCTION(BlueprintCallable)
    bool ScheduleDynamicCollisionUpdate(UPrimitiveComponent* Mesh, FDonCollisionSamplerCallback ResultHandler, FName CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable)
    bool NavPathQuery(AActor* Actor, FVector Destination, int32 MaxIterations, FDonNavigationPathFindingResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshBoundsWithinNavigableWorld(UPrimitiveComponent* Mesh, float BoundsScaleFactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationWithinNavigableWorld(FVector DesiredLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationBeneathLandscape(FVector Location, float LineTraceHeight) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDirectPathSweep(UPrimitiveComponent* CollisionComponent, FVector Start, FVector End, FHitResult& OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDirectPathLineTrace(FVector Start, FVector End, FHitResult& OutHit, const TArray<AActor*>& ActorsToIgnore, bool bFindInitialOverlaps) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDirectPathLineSweep(UPrimitiveComponent* CollisionComponent, FVector Start, FVector End, FHitResult& OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTask(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindRandomPointFromActorInNavWorld(AActor* Actor, float Distance, bool& bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector FindRandomPointAroundOriginInNavWorld(AActor* NavigationActor, FVector Origin, float Distance, bool& bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
    
    UFUNCTION(BlueprintCallable)
    bool FindPathSolution_StressTesting(AActor* Actor, FVector Destination, TArray<FVector>& PathSolutionRaw, TArray<FVector>& PathSolutionOptimized, const FDoNNavigationQueryParams& QueryParams, const FDoNNavigationDebugParams& DebugParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Debug_ToggleWorldBoundaryInGame() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_DrawVoxelCollisionProfile(UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void Debug_DrawVolumesAroundPoint(FVector Location, int32 CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes);
    
    UFUNCTION(BlueprintCallable)
    void Debug_DrawAllVolumes(float LineThickness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Debug_ClearAllVolumes() const;
    
    UFUNCTION(BlueprintCallable)
    void ConstructBuilder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ClampLocationToNavigableWorld(FVector DesiredLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNavigate(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void AbortPathfindingTask(AActor* Actor);
    
};

