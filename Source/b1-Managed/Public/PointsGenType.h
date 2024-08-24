#pragma once
#include "CoreMinimal.h"
#include "PointsGenType.generated.h"

UENUM(BlueprintType)
enum class PointsGenType : uint8 {
    ByEQS_Async,
    ByEQS_Sync,
    BySocket,
    BySceneItem,
    ExplodeLineTrace,
};

