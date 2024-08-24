#pragma once
#include "CoreMinimal.h"
#include "GameplayCounterType.generated.h"

UENUM(BlueprintType)
enum class GameplayCounterType : uint8 {
    None,
    Time,
    HP,
    HPPercent,
};

