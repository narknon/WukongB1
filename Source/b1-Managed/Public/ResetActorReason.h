#pragma once
#include "CoreMinimal.h"
#include "ResetActorReason.generated.h"

UENUM(BlueprintType)
enum class ResetActorReason : uint8 {
    None,
    Rebirth,
    InteractRebirthPoint,
    NewSpawn,
    LevelStreaming,
    MaxHeightOffset,
    ReturnHome,
    GameLevelPass,
};

