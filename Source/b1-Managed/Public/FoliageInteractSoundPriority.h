#pragma once
#include "CoreMinimal.h"
#include "FoliageInteractSoundPriority.generated.h"

UENUM(BlueprintType)
enum class FoliageInteractSoundPriority : uint8 {
    Default,
    Low,
    Medium,
    High,
};

