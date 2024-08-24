#pragma once
#include "CoreMinimal.h"
#include "SpawnWaveLocalSpaceType.generated.h"

UENUM(BlueprintType)
enum class SpawnWaveLocalSpaceType : uint8 {
    LocalPlayer,
    LocalController,
};

