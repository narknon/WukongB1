#pragma once
#include "CoreMinimal.h"
#include "HitPartRecoverAttrConversionType.generated.h"

UENUM(BlueprintType)
enum class HitPartRecoverAttrConversionType : uint8 {
    ByValue,
    ByRatio,
};

