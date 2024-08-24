#pragma once
#include "CoreMinimal.h"
#include "ESampleType.generated.h"

UENUM(BlueprintType)
enum class ESampleType : uint8 {
    Nearest,
    Bilinear,
};

