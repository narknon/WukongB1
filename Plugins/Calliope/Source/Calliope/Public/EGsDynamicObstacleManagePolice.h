#pragma once
#include "CoreMinimal.h"
#include "EGsDynamicObstacleManagePolice.generated.h"

UENUM(BlueprintType)
enum class EGsDynamicObstacleManagePolice : uint8 {
    SameAsPrevious,
    KeepOpen,
    KeepClose,
    AsBattleInDoor,
    AsBattleOutDoor,
};

