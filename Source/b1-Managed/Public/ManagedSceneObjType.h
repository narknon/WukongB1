#pragma once
#include "CoreMinimal.h"
#include "ManagedSceneObjType.generated.h"

UENUM(BlueprintType)
enum class ManagedSceneObjType : uint8 {
    None,
    DynamicObstacle,
    Overlap,
    Interactor,
    Unit,
    Spawner,
};

