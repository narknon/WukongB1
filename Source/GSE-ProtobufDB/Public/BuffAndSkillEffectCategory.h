#pragma once
#include "CoreMinimal.h"
#include "BuffAndSkillEffectCategory.generated.h"

UENUM(BlueprintType)
enum class BuffAndSkillEffectCategory : uint8 {
    Neutral,
    Positive,
    Negative,
    EnumMax,
};

