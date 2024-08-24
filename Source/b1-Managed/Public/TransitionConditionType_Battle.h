#pragma once
#include "CoreMinimal.h"
#include "TransitionConditionType_Battle.generated.h"

UENUM(BlueprintType)
enum class TransitionConditionType_Battle : uint8 {
    None,
    UnitsDead,
    WaveEnd,
    HasBuff,
    KillOrder,
    UnitsTransStage,
    UnitsAlive,
    GroupUnitDead,
    Countdown,
    NotInOverlapBox,
    InOverlapBox,
    UIBattleFinish,
    PlayerAlive,
    PlayerDead,
};

