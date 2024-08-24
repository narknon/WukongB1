#pragma once
#include "CoreMinimal.h"
#include "StandRotateType.generated.h"

UENUM(BlueprintType)
enum class StandRotateType : uint8 {
    Left90,
    Right90,
    Left180,
    Right180,
};

