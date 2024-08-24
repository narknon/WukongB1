#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AutoMovementViewingPattern.h"
#include "ERotateType.h"
#include "AutoMovementMonitor.generated.h"

class UAutoMovementPattern;

UCLASS(Blueprintable)
class UNREALEXTENT_API AAutoMovementMonitor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoMovementPattern* AutoMovePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReportFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CachedPathPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogProcessingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReadyToProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPitchingPositively;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPositionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetYawIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPitchIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewingPhaseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutoMoveStartTimeSinceAppStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPointEndTimestamp;
    
    AAutoMovementMonitor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransportViewingPosition(FVector InLocation, FRotator InRotator, bool bProxyCall);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchToVirtualPawn(UClass* VirtualPlayerBaseClass, FVector SpawningOffset);
    
    UFUNCTION(BlueprintCallable)
    void SwitchRotateDirection();
    
    UFUNCTION(BlueprintCallable)
    void StopAutoMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetSparseVersionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeAutoMovement();
    
    UFUNCTION(BlueprintCallable)
    void ResetYawRotation();
    
    UFUNCTION(BlueprintCallable)
    void ResetTransportAttemptedCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetPitchRotation();
    
    UFUNCTION(BlueprintCallable)
    void ResetAutoMovement();
    
    UFUNCTION(BlueprintCallable)
    void RegisterAutoMovementConsoleCommands();
    
    UFUNCTION(BlueprintCallable)
    void ProcessAutoMovement(FVector InLocation, FRotator InRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreAutoMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostAutoMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseAutoMovement();
    
    UFUNCTION(BlueprintCallable)
    void LoadPathPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IncreaseViewingRotation(ERotateType RotateType, bool bProxyCall);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedYawingObservation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompletedPitchingObservation() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetRotationIncrement(FVector InRotatorMask, FAutoMovementViewingPattern ViewingPattern);
    
    UFUNCTION(BlueprintCallable)
    FString GetPointExecutionDurationInfo(int64 InStartTimestamp);
    
    UFUNCTION(BlueprintCallable)
    void ExitAppOnAutoMoveFinished();
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DrawStatOnHeatmap(const FString& InStatName, const int32 InTileCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreatePointInstances(const TArray<FVector>& InPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckHitRotation(FRotator InRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHitLocation(FVector InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAutoMovementCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CaptureViewingInfo();
    
};

