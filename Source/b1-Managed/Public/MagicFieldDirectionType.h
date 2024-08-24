#pragma once
#include "CoreMinimal.h"
#include "MagicFieldDirectionType.generated.h"

UENUM(BlueprintType)
enum class MagicFieldDirectionType : uint8 {
    None,
    Directional,
    Radial,
    Spiral,
};

