#pragma once
#include "CoreMinimal.h"
#include "TransitionConditionType_State.generated.h"

UENUM(BlueprintType)
enum class TransitionConditionType_State : uint8 {
    None,
    EnterOverlap,
    InteractorEnd,
    InteractorTimeOver,
    UnitsDead,
    WaveEnd,
    HasBuff,
    SequencePlayed,
    TaskStage,
    GamePlayCount,
    CircusInteractorEnd,
    CircusEnterOverlap,
    NotInOverlapBox,
    InOverlapBox,
};

