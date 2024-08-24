#pragma once
#include "CoreMinimal.h"
#include "EGSBuffAndSkillEffectActiveCondition.generated.h"

UENUM(BlueprintType)
enum class EGSBuffAndSkillEffectActiveCondition : uint8 {
    Always,
    ByProbability,
    HasTalent,
    HasBuff,
    ByAttr,
    NotHasTalent,
    HasAnyBuff,
    NotHasBuff,
    MasterHasTalent,
    CheckPhysMat,
    IsSprinting,
    CheckNotOnPhysMat,
    TargetHasBuff,
    TargetHasSimpleState,
    TargetByAttr,
    TargetHasAnyBuff,
    TargetHasAnySimpleState,
    HasAnyTalent,
    CheckResId,
    MasterNotHasBuff,
    MasterHasAnyBuff,
    TargetHasAbnormalState,
    HasSimpleState,
    TargetNotHasBuff,
    NotHasSimpleState,
    EnumMax,
};

