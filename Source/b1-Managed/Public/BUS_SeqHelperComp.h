#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseActorComp.h"
#include "EAIMoveSpeedType.h"
#include "EBGUMoveAIType.h"
#include "EBGUSimpleState.h"
#include "BUS_SeqHelperComp.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SeqHelperComp : public UBaseActorComp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform CameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform MoveToTargetTransform;
    
public:
    UBUS_SeqHelperComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void EnableAI();
    
    UFUNCTION(BlueprintCallable)
    void DisableAI();
    
    UFUNCTION(BlueprintCallable)
    void PerformJump(UAnimMontage* JumpMontage, float JumpForce);
    
    UFUNCTION(BlueprintCallable)
    void PerformPatrol();
    
    UFUNCTION(BlueprintCallable)
    void NotifyUnitDead();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSimpleStates(EBGUSimpleState SimpleState, bool IsRemoving);
    
    UFUNCTION(BlueprintCallable)
    void PerformMoveToPlayer(EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius);
    
    UFUNCTION(BlueprintCallable)
    void PerformPerceivePlayer();
    
    UFUNCTION(BlueprintCallable)
    void PerformMoveToLocation(FVector position, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveToTargetTransform(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAIPerceptionSetting(bool InEnableVisualize, float InSightRange, float InVisionAngleDegrees, float InHearRange, float InPursuitRange);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterCollisionProfile(FName CollisionProfileName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

