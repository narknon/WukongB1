#pragma once
#include "CoreMinimal.h"
#include "EAICheckDistanceType.generated.h"

UENUM(BlueprintType)
enum class EAICheckDistanceType : uint8 {
    LocationDistanceXY,
    LocationDistance,
    ZDistance,
    NavigationDistance,
};

