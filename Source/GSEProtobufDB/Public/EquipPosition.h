#pragma once
#include "CoreMinimal.h"
#include "EquipPosition.generated.h"

UENUM(BlueprintType)
enum class EquipPosition : uint8 {
    Head,
    Upwear,
    Arm,
    Foot,
    Hulu,
    Weapon,
    Fabao,
    Accessory,
    EnumMax,
};

