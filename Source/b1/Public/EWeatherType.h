#pragma once
#include "CoreMinimal.h"
#include "EWeatherType.generated.h"

UENUM(BlueprintType)
enum class EWeatherType : uint8 {
    None,
    Snowy,
    Rainy,
};

