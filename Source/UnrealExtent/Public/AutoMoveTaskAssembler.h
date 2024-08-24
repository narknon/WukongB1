#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AutoMovementMonitor.h"
#include "ERotateType.h"
#include "AutoMoveTaskAssembler.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API AAutoMoveTaskAssembler : public AAutoMovementMonitor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAutoMovementMonitor*> Tasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PointsTaskIdList;
    
    AAutoMoveTaskAssembler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateProcessingState();
    
    UFUNCTION(BlueprintCallable)
    void TransportSubTaskViewingPosition(FVector InLocation, FRotator InRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitAutoMoveAssembler();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseSubTaskViewingRotation(ERotateType InRotateType);
    
};

