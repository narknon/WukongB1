#pragma once
#include "CoreMinimal.h"
#include "EGSGraphicsMemoryMode.generated.h"

UENUM(BlueprintType)
enum class EGSGraphicsMemoryMode : uint8 {
    DEDICATED,
    SHARED,
    TOTAL,
};

