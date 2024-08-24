#pragma once
#include "CoreMinimal.h"
#include "SkillDirection.generated.h"

UENUM(BlueprintType)
enum class SkillDirection : uint8 {
    None,
    Forward,
    Right,
    Backward,
    Left,
};

