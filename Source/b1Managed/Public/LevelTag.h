#pragma once
#include "CoreMinimal.h"
#include "LevelTag.generated.h"

UENUM(BlueprintType)
enum class LevelTag : uint8 {
    None,
    Party,
    SupportRide,
    SupportOpenMap,
};

