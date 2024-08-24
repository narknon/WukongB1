#pragma once
#include "CoreMinimal.h"
#include "ComboConditionType.generated.h"

UENUM(BlueprintType)
enum class ComboConditionType : uint8 {
    None,
    UnitAttr,
    SimpleState,
    UnitState,
    HasBuff,
    PotentialEnergy,
    Charge,
    CeilingHeight,
    HasTalent,
    StanceType,
    IsFalling = 11,
    InJumpUpper,
    NotInStrideUpJump,
    AirSkillCount,
    FlooDistance,
    MoveMode,
    HasMoveInput,
    InLittleMonkeyStage,
    InPreDaShengStage,
    InDaShengStage,
    InPressedSpinModeState,
    EnumMax,
};

