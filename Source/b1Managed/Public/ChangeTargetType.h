#pragma once
#include "CoreMinimal.h"
#include "ChangeTargetType.generated.h"

UENUM(BlueprintType)
enum class ChangeTargetType : uint8 {
    None,
    Player,
    Master,
    Summon,
    SkillBaseTarget,
    UnitGuid,
};

