#pragma once
#include "CoreMinimal.h"
#include "TraceSpawnType.generated.h"

UENUM(BlueprintType)
enum class TraceSpawnType : uint8 {
    None,
    ByTeleportIndex,
    EnumMax,
};

