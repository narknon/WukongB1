#pragma once
#include "CoreMinimal.h"
#include "WarnState.generated.h"

UENUM(BlueprintType)
enum class WarnState : uint8 {
    None,
    Danger,
    Safe,
    EnumMax,
};

