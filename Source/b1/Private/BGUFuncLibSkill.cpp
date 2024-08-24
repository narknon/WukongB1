#include "BGUFuncLibSkill.h"

UBGUFuncLibSkill::UBGUFuncLibSkill() {
}

bool UBGUFuncLibSkill::MontageInstanceUnBindUFunctionToMontegeEndDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage) {
    return false;
}

bool UBGUFuncLibSkill::MontageInstanceUnBindUFunctionToMontageBlendOutDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage) {
    return false;
}

bool UBGUFuncLibSkill::MontageInstanceBindUFunctionToMontegeEndDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage, UObject* Object, const FName FunctionName) {
    return false;
}

bool UBGUFuncLibSkill::MontageInstanceBindUFunctionToMontageBlendOutDel(UAnimInstance* AnimInstance, const UAnimMontage* Montage, UObject* Object, const FName FunctionName) {
    return false;
}

FVector UBGUFuncLibSkill::BGUGetMotionDirFromSkill(int32 SkillID) {
    return FVector{};
}

void UBGUFuncLibSkill::BGUGetMontageNotifies(const UAnimMontage* Montage, TArray<FAnimNotifyEvent>& OutActiveNotifies) {
}

bool UBGUFuncLibSkill::BGUGetMontageHasRootMotion(const UAnimMontage* Montage) {
    return false;
}

int32 UBGUFuncLibSkill::BGUGetActiveInstanceIDForMontage(UAnimInstance* AnimInstance, const UAnimMontage* Montage) {
    return 0;
}

float UBGUFuncLibSkill::BGUCalcNotifyNeedModifyTotalTime(ACharacter* Unit, const UAnimNotifyState* NotifyEvent, int32 FromAMInstanceID, float CurNSLeftTime, float CurNSRightTime) {
    return 0.0f;
}

float UBGUFuncLibSkill::BGUCalcMontageSpecificRangeTime(AActor* Unit, int32 FromAMInstanceID, float LeftTime, float RightTime, UAnimMontage* CurMontage) {
    return 0.0f;
}

float UBGUFuncLibSkill::BGUCalcMontageNeedModifyTotalTime(ACharacter* Unit, int32 FromAMInstanceID) {
    return 0.0f;
}


