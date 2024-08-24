#pragma once
#include "CoreMinimal.h"
#include "ChargeSkillStage.generated.h"

UENUM(BlueprintType)
enum class ChargeSkillStage : uint8 {
    None,
    Begin,
    Loop,
    End,
    EnumMax = 255,
};

