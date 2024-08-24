#pragma once
#include "CoreMinimal.h"
#include "AnimalDistributionSpawnTendency.generated.h"

UENUM(BlueprintType)
enum class AnimalDistributionSpawnTendency : uint8 {
    Concentrated,
    Random,
};

