#pragma once
#include "CoreMinimal.h"
#include "ESweepCheckType.generated.h"

UENUM(BlueprintType)
enum class ESweepCheckType : uint8 {
    SweepCheck,
    AttackWarning,
    Max,
};

