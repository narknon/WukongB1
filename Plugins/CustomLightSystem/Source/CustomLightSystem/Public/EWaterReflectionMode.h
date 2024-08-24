#pragma once
#include "CoreMinimal.h"
#include "EWaterReflectionMode.generated.h"

UENUM(BlueprintType)
enum class EWaterReflectionMode : uint8 {
    None,
    Lumen,
    ReflectionSphere = 3,
};

