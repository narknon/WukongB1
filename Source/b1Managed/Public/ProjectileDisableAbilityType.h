#pragma once
#include "CoreMinimal.h"
#include "ProjectileDisableAbilityType.generated.h"

UENUM(BlueprintType)
enum class ProjectileDisableAbilityType : uint8 {
    Default,
    SweepCheck = 2,
    Audio = 4,
};

