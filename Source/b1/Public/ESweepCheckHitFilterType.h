#pragma once
#include "CoreMinimal.h"
#include "ESweepCheckHitFilterType.generated.h"

UENUM(BlueprintType)
enum class ESweepCheckHitFilterType : uint8 {
    Zero,
    NotInSameTeam,
    FilterMaster,
    MAX = 255,
};

