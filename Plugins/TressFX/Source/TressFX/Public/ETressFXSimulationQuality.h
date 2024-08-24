#pragma once
#include "CoreMinimal.h"
#include "ETressFXSimulationQuality.generated.h"

UENUM(BlueprintType)
enum class ETressFXSimulationQuality : uint8 {
    TFXSim_Disable,
    TFXSim_Full,
};

