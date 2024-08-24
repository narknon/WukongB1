#pragma once
#include "CoreMinimal.h"
#include "DropItemPerfromType.generated.h"

UENUM(BlueprintType)
enum class DropItemPerfromType : uint8 {
    WithOutPick,
    Standard,
    WithDropAnim,
    FixedPoint,
};

