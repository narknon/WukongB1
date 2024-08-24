#pragma once
#include "CoreMinimal.h"
#include "SkillSelectOpType.generated.h"

UENUM(BlueprintType)
enum class SkillSelectOpType : uint8 {
    Free,
    Suction,
    SwitchTarget,
};

