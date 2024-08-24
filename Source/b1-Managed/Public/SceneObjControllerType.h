#pragma once
#include "CoreMinimal.h"
#include "SceneObjControllerType.generated.h"

UENUM(BlueprintType)
enum class SceneObjControllerType : uint8 {
    Base,
    CharacterActiveState,
    TriggerState,
    ActorCallState,
    TriggerBox,
    RebirthPointActiveState,
    DynamicObstacleState,
};

