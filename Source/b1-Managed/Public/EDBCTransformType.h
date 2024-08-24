#pragma once
#include "CoreMinimal.h"
#include "EDBCTransformType.generated.h"

UENUM(BlueprintType)
enum class EDBCTransformType : uint8 {
    SweepCheck,
    Normal,
};

