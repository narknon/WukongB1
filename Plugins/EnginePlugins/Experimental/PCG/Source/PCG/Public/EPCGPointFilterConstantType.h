#pragma once
#include "CoreMinimal.h"
#include "EPCGPointFilterConstantType.generated.h"

UENUM(BlueprintType)
enum class EPCGPointFilterConstantType : uint8 {
    Integer64,
    Float,
    Vector,
    Vector4,
    String,
    Unknown,
};

