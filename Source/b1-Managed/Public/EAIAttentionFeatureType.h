#pragma once
#include "CoreMinimal.h"
#include "EAIAttentionFeatureType.generated.h"

UENUM(BlueprintType)
enum class EAIAttentionFeatureType : uint8 {
    None,
    NearestEnemy,
    SkillArea,
    StandInSkillArea,
    SkillCastRange,
    AttackableEnemy,
};

