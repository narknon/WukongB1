#pragma once
#include "CoreMinimal.h"
#include "ManagedNPCUnitType.generated.h"

UENUM(BlueprintType)
enum class ManagedNPCUnitType : uint8 {
    None,
    DynamicObstacle,
    TriggerBox,
    Interactor,
    Spawner,
    Unit,
};

