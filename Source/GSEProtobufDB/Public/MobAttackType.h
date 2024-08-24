#pragma once
#include "CoreMinimal.h"
#include "MobAttackType.generated.h"

UENUM(BlueprintType)
enum class MobAttackType : uint8 {
    MeleeAttack,
    RangedAttack,
};

