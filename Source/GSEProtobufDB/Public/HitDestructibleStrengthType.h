#pragma once
#include "CoreMinimal.h"
#include "HitDestructibleStrengthType.generated.h"

UENUM(BlueprintType)
enum class HitDestructibleStrengthType : uint8 {
    None,
    Light,
    Medium,
    Heavy,
    Special,
};

