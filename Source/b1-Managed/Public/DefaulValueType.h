#pragma once
#include "CoreMinimal.h"
#include "DefaulValueType.generated.h"

UENUM(BlueprintType)
enum class DefaulValueType : uint8 {
    Percent,
    PlayerHp,
    PlayerMp,
    PlayerSt,
    UnitHp,
    MultiMapping,
};

