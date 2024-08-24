#pragma once
#include "CoreMinimal.h"
#include "TeleportLocationType.generated.h"

UENUM(BlueprintType)
enum class TeleportLocationType : uint8 {
    None,
    BossTraceCenter,
    BossTracePointRandom,
    EnumMax,
};

