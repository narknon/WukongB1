#pragma once
#include "CoreMinimal.h"
#include "LoadingUIFadeInReason.generated.h"

UENUM(BlueprintType)
enum class LoadingUIFadeInReason : uint8 {
    None,
    CombatTeleport,
    NonCombatTeleport,
    OnlineDisconnect,
};

