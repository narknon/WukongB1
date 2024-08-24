#pragma once
#include "CoreMinimal.h"
#include "SceneInteractorType.generated.h"

UENUM(BlueprintType)
enum class SceneInteractorType : uint8 {
    NONE,
    HALF_CIRCLE,
    CIRCLE,
    MOVING_RECT,
};

