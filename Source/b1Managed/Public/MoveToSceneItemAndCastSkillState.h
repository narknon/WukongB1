#pragma once
#include "CoreMinimal.h"
#include "MoveToSceneItemAndCastSkillState.generated.h"

UENUM(BlueprintType)
enum class MoveToSceneItemAndCastSkillState : uint8 {
    None,
    RotateToSceneItem = 2,
    MoveToSceneItem,
    TryCastSkill,
    CastingSkill,
    EnumMax,
};

