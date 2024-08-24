#pragma once
#include "CoreMinimal.h"
#include "GroupAIAttackBias.generated.h"

UENUM(BlueprintType)
enum class GroupAIAttackBias : uint8 {
    None,
    MeleeAttack,
    RangeAttack,
};

