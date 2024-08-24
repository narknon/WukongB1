#pragma once
#include "CoreMinimal.h"
#include "EGSQTESyncType.generated.h"

UENUM(BlueprintType)
enum class EGSQTESyncType : uint8 {
    None,
    MoveEnemy,
    MovePlayer,
    BothInTurn,
    BothSameTime,
    AutoEnemyFirst,
    AutoPlayerFirst,
    EnumMax = 255,
};

