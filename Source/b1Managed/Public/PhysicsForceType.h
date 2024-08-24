#pragma once
#include "CoreMinimal.h"
#include "PhysicsForceType.generated.h"

UENUM(BlueprintType)
enum class PhysicsForceType : uint8 {
    DirectionalForce,
    ExplosiveForce,
};

