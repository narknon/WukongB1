#pragma once
#include "CoreMinimal.h"
#include "SkipType.generated.h"

UENUM(BlueprintType)
enum class SkipType : uint8 {
    None,
    FastForward,
    SetPosition,
};

