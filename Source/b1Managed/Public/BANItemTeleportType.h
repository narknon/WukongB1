#pragma once
#include "CoreMinimal.h"
#include "BANItemTeleportType.generated.h"

UENUM(BlueprintType)
enum class BANItemTeleportType : uint8 {
    TeleportTargetRebirthPointId,
    RebirthPointTeleport,
};

