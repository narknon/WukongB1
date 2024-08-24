#pragma once
#include "CoreMinimal.h"
#include "PhysicBlendOutType.generated.h"

UENUM(BlueprintType)
enum class PhysicBlendOutType : uint8 {
    Immediately,
    BlendByTimeBeforeEnd,
    BlendByTimeAfterEnd,
};

