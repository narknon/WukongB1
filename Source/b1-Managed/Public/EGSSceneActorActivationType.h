#pragma once
#include "CoreMinimal.h"
#include "EGSSceneActorActivationType.generated.h"

UENUM(BlueprintType)
enum class EGSSceneActorActivationType : uint8 {
    PhysicsSimulation,
    EmitterActivation,
    TickEnable,
    BGUActorActivation,
    HiddenInGame,
    ActorCollision,
};

