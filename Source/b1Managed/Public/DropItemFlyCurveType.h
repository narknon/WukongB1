#pragma once
#include "CoreMinimal.h"
#include "DropItemFlyCurveType.generated.h"

UENUM(BlueprintType)
enum class DropItemFlyCurveType : uint8 {
    FastBezier,
    CurveTranslation,
};

