#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataMakeVector4.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataMakeVector4 : uint8 {
    FourValues,
    Vector2AndTwoValues,
    TwoVector2,
    Vector3AndValue,
};

