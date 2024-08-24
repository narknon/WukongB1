#pragma once
#include "CoreMinimal.h"
#include "EGSHitDestructibleStrengthLevel.generated.h"

UENUM(BlueprintType)
enum class EGSHitDestructibleStrengthLevel : uint8 {
    None,
    Light,
    Medium,
    Heavy,
    Special,
};

