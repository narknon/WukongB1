#pragma once
#include "CoreMinimal.h"
#include "ObserveConditionType.generated.h"

UENUM(BlueprintType)
enum class ObserveConditionType : uint8 {
    None,
    PlayerEnterArea,
    PlayerLeaveArea,
    PlayerPenetrateArea,
    PlayerInteractBegin,
    PlayerInteractBreak,
    PlayerInteractEnd,
    PlayerInteractTimeEnd,
    UnitAllDeadInnerRange,
    SpawnUnitAllDead,
    TimeOver,
    TimeOut,
    WakeUp,
    UnitDead,
    Trigger,
    GateOpen,
    GateClose,
    ChallengeFailed,
    ChallengeAwarded,
    ChallengeSuccess,
    ChallengeBegin,
    UseTagFlag = 100,
    UnitDestroy,
    UnitActive,
    UnitInActive,
    UnitAttr,
    SimpleState,
    UnitState,
    HasBuff,
    ItemFullOnline,
    EnumMax,
};

