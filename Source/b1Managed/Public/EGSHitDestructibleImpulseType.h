#pragma once
#include "CoreMinimal.h"
#include "EGSHitDestructibleImpulseType.generated.h"

UENUM(BlueprintType)
enum class EGSHitDestructibleImpulseType : uint8 {
    Default,
    StrengthLevel,
    Manual,
};

