#pragma once
#include "CoreMinimal.h"
#include "UnitAICrowdQualityLevel.generated.h"

UENUM(BlueprintType)
enum class UnitAICrowdQualityLevel : uint8 {
    Low,
    Medium,
    Good,
    High,
    EnumMax = 255,
};

