#pragma once
#include "CoreMinimal.h"
#include "EDPSCalTimeType.generated.h"

UENUM(BlueprintType)
enum class EDPSCalTimeType : uint8 {
    Total,
    FromLastHit,
};

