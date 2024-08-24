#pragma once
#include "CoreMinimal.h"
#include "TransitionConditionType_Group.generated.h"

UENUM(BlueprintType)
enum class TransitionConditionType_Group : uint8 {
    None,
    EnterOverlap,
    InteractorEnd,
    InteractorInOverlap,
    GameStateCondition,
    InteractorTimeOver,
    UnitsDead,
    WaveEnd,
    HasBuff,
    KillOrder,
    SequencePlayed,
    TaskStage,
    UnitsAlive,
    CircusInteractorEnd,
    CircusEnterOverlap,
    NotInOverlapBox,
    InOverlapBox,
    UIBattleFinish,
};

