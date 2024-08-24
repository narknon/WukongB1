#include "BGUFuncLibSkillCS.h"

UBGUFuncLibSkillCS::UBGUFuncLibSkillCS() {
}

int32 UBGUFuncLibSkillCS::BGUGetLastSkillID(AActor* Unit) {
    return 0;
}

int32 UBGUFuncLibSkillCS::BGUGetCastingSkillID(ACharacter* Unit) {
    return 0;
}

float UBGUFuncLibSkillCS::BGUGetLastSkillCastTime(AActor* Unit, int32 SkillID) {
    return 0.0f;
}

FVector UBGUFuncLibSkillCS::BGUCalcSkillMontageScaleRate(ACharacter* Unit, FVector TargetPos, float NotifyBeginTime, float NotifyEndTime, float AMScaleMinRate, float AMScaleMaxRate, float AMScaleMoveOffset, float AMScaleMoveOffsetZ, bool EnableDebug) {
    return FVector{};
}


