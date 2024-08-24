#pragma once
#include "CoreMinimal.h"
#include "EBGW_DispLibEnvWeather.generated.h"

UENUM(BlueprintType)
enum class EBGW_DispLibEnvWeather : uint8 {
    Sunny,
    Mist,
    Rain,
    Fog,
    Snow,
    SandStorm,
    Narrative,
    Night,
};

