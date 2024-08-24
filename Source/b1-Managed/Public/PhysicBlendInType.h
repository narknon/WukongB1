#pragma once
#include "CoreMinimal.h"
#include "PhysicBlendInType.generated.h"

UENUM(BlueprintType)
enum class PhysicBlendInType : uint8 {
    Immediately,
    BlendByTime,
};

