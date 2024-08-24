#pragma once
#include "CoreMinimal.h"
#include "AkEventStopMode.generated.h"

UENUM(BlueprintType)
enum class AkEventStopMode : uint8 {
    Auto,
    WhenUnitDead,
    ByTime,
};

