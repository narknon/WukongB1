#pragma once
#include "CoreMinimal.h"
#include "ProjectileSpecificFlags.generated.h"

UENUM(BlueprintType)
enum class ProjectileSpecificFlags : uint8 {
    None,
    Flame = 2,
    Poison = 4,
    WeakGuardianCircle = 8,
};

