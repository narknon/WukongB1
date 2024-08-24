#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibSkill.generated.h"

class AActor;
class ACharacter;
class UAnimInstance;
class UAnimMontage;
class UAnimNotifyState;
class UObject;

UCLASS(Blueprintable)
class B1_API UBGUFuncLibSkill : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibSkill();

    UFUNCTION(BlueprintCallable)
    static bool MontageInstanceUnBindUFunctionToMontegeEndDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static bool MontageInstanceUnBindUFunctionToMontageBlendOutDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static bool MontageInstanceBindUFunctionToMontegeEndDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage, UObject* Object, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static bool MontageInstanceBindUFunctionToMontageBlendOutDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage, UObject* Object, const FName FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FVector BGUGetMotionDirFromSkill(int32 SkillID);
    
    UFUNCTION(BlueprintCallable)
    static void BGUGetMontageNotifies(const UAnimMontage* Montage, TArray<FAnimNotifyEvent>& OutActiveNotifies);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BGUGetMontageHasRootMotion(const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetActiveInstanceIDForMontage(UAnimInstance* AnimInstance, const UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static float BGUCalcNotifyNeedModifyTotalTime(ACharacter* Unit, const UAnimNotifyState* NotifyEvent, int32 FromAMInstanceID, float CurNSLeftTime, float CurNSRightTime);
    
    UFUNCTION(BlueprintCallable)
    static float BGUCalcMontageSpecificRangeTime(AActor* Unit, int32 FromAMInstanceID, float LeftTime, float RightTime, UAnimMontage* CurMontage);
    
    UFUNCTION(BlueprintCallable)
    static float BGUCalcMontageNeedModifyTotalTime(ACharacter* Unit, int32 FromAMInstanceID);
    
};

