#pragma once
#include "CoreMinimal.h"
#include "SkillMappingResultRull.generated.h"

UENUM(BlueprintType)
enum class SkillMappingResultRull : uint8 {
    PseudoRandom,
    Latest,
    First,
    EnumMax,
};

