#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BaseActorComp.h"
#include "EAIMoveSpeedType.h"
#include "EBGUMoveAIType.h"
#include "EBGUSimpleState.h"
#include "Templates/SubclassOf.h"
#include "BUS_SeqHelperActorComp.generated.h"

class ABGUCharacterCS;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SeqHelperActorComp : public UBaseActorComp {
    GENERATED_BODY()
public:
    UBUS_SeqHelperActorComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddBuff(FName Tag, bool IsRemoving, int32 BuffID, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void EnableAI(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DisableAI(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void ExitStealth();
    
    UFUNCTION(BlueprintCallable)
    void PlayMontage(FName Tag, UAnimMontage* MontageToPlay);
    
    UFUNCTION(BlueprintCallable)
    void PerformPatrol(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void CatchAsTarget(FName SelfTag, FName TargetTag);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(FName Tag, bool IsHidden, bool EnableCollision);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUnitDead(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSimpleStates(FName Tag, EBGUSimpleState SimpleState, bool IsRemoving);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPlayerPartner(TSubclassOf<ABGUCharacterCS> Class, FTransform Transform, FName Tag, bool PauseAI);
    
    UFUNCTION(BlueprintCallable)
    void PerformMoveToPlayer(FName Tag, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius);
    
    UFUNCTION(BlueprintCallable)
    void PerformMoveToLocation(FName Tag, FVector position, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius);
    
    UFUNCTION(BlueprintCallable)
    void PerformPerceivePlayer(FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

