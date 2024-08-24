#pragma once
#include "CoreMinimal.h"
#include "OrderSetting.generated.h"

UENUM(BlueprintType)
enum class OrderSetting : uint8 {
    Baseline,
    Top,
    Bottom,
};

