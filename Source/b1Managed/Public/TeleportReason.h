#pragma once
#include "CoreMinimal.h"
#include "TeleportReason.generated.h"

UENUM(BlueprintType)
enum class TeleportReason : uint8 {
    None,
    Rebirth,
    RebirthPointManual,
};

