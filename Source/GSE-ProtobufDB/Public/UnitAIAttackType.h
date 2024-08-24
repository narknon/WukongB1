#pragma once
#include "CoreMinimal.h"
#include "UnitAIAttackType.generated.h"

UENUM(BlueprintType)
enum class UnitAIAttackType : uint8 {
    ActiveAttack,
    PassiveAttack,
    EnumMax = 255,
};

