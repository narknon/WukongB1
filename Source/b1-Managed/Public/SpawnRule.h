#pragma once
#include "CoreMinimal.h"
#include "SpawnRule.generated.h"

UENUM(BlueprintType)
enum class SpawnRule : uint8 {
    Random,
    RandomLeast,
    First,
};

