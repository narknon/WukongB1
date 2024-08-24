#pragma once
#include "CoreMinimal.h"
#include "EGSRoarWeightLevel.generated.h"

UENUM(BlueprintType)
enum class EGSRoarWeightLevel : uint8 {
    NoFeeling,
    Light,
    Medium,
    Heavy,
    EnumMax,
};

