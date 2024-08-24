#pragma once
#include "CoreMinimal.h"
#include "AccAbnormalValueType.generated.h"

UENUM(BlueprintType)
enum class AccAbnormalValueType : uint8 {
    IncreaseByValue,
    IncreaseByINV10000,
};

