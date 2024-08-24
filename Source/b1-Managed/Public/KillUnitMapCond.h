#pragma once
#include "CoreMinimal.h"
#include "KillUnitMapCond.generated.h"

UENUM(BlueprintType)
enum class KillUnitMapCond : uint8 {
    Crit,
    NoCodition,
    Unparalleled,
    PerfectChargeDamage,
};

