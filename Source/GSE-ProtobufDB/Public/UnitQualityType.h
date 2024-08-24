#pragma once
#include "CoreMinimal.h"
#include "UnitQualityType.generated.h"

UENUM(BlueprintType)
enum class UnitQualityType : uint8 {
    None,
    Minion,
    Soldier,
    Captain,
    Chief,
    NormalElite,
    CoreElite,
    NormalBoss,
    FinalBoss,
    PlayerSummon = 98,
    Player,
};

