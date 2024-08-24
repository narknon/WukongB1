#pragma once
#include "CoreMinimal.h"
#include "UnitGuidType.generated.h"

UENUM(BlueprintType)
enum class UnitGuidType : uint8 {
    Random,
    Fixed,
};

