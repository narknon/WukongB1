#pragma once
#include "CoreMinimal.h"
#include "FallHeightType_V2.generated.h"

UENUM(BlueprintType)
enum class FallHeightType_V2 : uint8 {
    FallHeight_Little,
    FallHeight_Low,
    FallHeight_Mid,
    FallHeight_High,
    FallHeight_Dead,
};

