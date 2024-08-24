#pragma once
#include "CoreMinimal.h"
#include "position.generated.h"

UENUM(BlueprintType)
enum class position : uint8 {
    center,
    left,
    right,
};

