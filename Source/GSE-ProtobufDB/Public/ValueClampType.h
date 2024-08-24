#pragma once
#include "CoreMinimal.h"
#include "ValueClampType.generated.h"

UENUM(BlueprintType)
enum class ValueClampType : uint8 {
    None,
    Value,
    MaxRatio,
};

