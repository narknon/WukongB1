#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataMakeVector3.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataMakeVector3 : uint8 {
    ThreeValues,
    Vector2AndValue,
};

