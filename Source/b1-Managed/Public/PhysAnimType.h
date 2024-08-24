#pragma once
#include "CoreMinimal.h"
#include "PhysAnimType.generated.h"

UENUM(BlueprintType)
enum class PhysAnimType : uint8 {
    None,
    Normal,
    BeAttack,
    PhysicBlend,
    BeCatchThrow,
    PhysicsSimulationMove,
    DeathPhysicBlend,
    DATA_MAX UMETA(Hidden),
    Death,
    ThrowUpDeath,
};

