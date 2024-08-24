#pragma once
#include "CoreMinimal.h"
#include "EscapeWay.generated.h"

UENUM(BlueprintType)
enum class EscapeWay : uint8 {
    None,
    MoveTo,
    CastSkill,
};

