#pragma once
#include "CoreMinimal.h"
#include "HitWeightGearType.generated.h"

UENUM(BlueprintType)
enum class HitWeightGearType : uint8 {
    LowHitWeight,
    MediueHitWeight,
    HeightHitWeight,
    HugeHitWeight,
    MustDefeatHitWeight,
};

