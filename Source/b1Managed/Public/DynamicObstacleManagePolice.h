#pragma once
#include "CoreMinimal.h"
#include "DynamicObstacleManagePolice.generated.h"

UENUM(BlueprintType)
enum class DynamicObstacleManagePolice : uint8 {
    SameAsPrevious,
    KeepOpen,
    KeepClose,
    AsBattleInDoor,
    AsBattleOutDoor,
};

