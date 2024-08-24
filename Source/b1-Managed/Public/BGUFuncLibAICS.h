#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBGUFSMEventName.h"
#include "CastSkillSourceType.h"
#include "EAIMoveSpeedType.h"
#include "EBGUMoveAIType.h"
#include "State_MM.h"
#include "BGUFuncLibAICS.generated.h"

class AActor;
class ABGUCharacterCS;
class UAnimMontage;
class UObject;

UCLASS(Blueprintable)
class UBGUFuncLibAICS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibAICS();

    UFUNCTION(BlueprintCallable)
    static int32 BGUAISideWalk(AActor* Unit, float MoveForwardValue, float MoveHorizonValue);
    
    UFUNCTION(BlueprintCallable)
    static void BGUCancelAIMoveTo(AActor* Unit, int32 RequestIdx);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAISwitchSideWalk(AActor* Unit, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAITriggerFSMEvent(AActor* Unit, EBGUFSMEventName FSMEvent);
    
    UFUNCTION(BlueprintCallable)
    static void BGUCancelAICurrentMove(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUpdateUnitBattleState(ABGUCharacterCS* Unit, bool IsInBattle);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGURequestAIMontageMoveTo(AActor* Unit, UAnimMontage* Montage, float ScaleRate, float PlayTimeRate, float PosOffset);
    
    UFUNCTION(BlueprintCallable)
    static void BGUAISetUnitTargetAsPlayer(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGURequestAIMoveToLocation(AActor* Unit, FVector position, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUAISetUnitsTargetAsPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGURequestAIUseSkillWithSkillID(AActor* Unit, int32 SkillID, CastSkillSourceType SourceType);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGURequestAIMoveToLocationWithMM(AActor* Unit, FVector position, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius, State_MM MotionMatchingState);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGURequestAIWallAndCellMoveToLocation(AActor* Unit, FVector position, EAIMoveSpeedType SpeedRateType, float turnSpeed, float AcceptableRadius, bool IncludeSelfRadius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BGUAISetUnitsTargetAsPlayerByTamerActorTag(UObject* WorldContextObject, FName MatchTag);
    
};

