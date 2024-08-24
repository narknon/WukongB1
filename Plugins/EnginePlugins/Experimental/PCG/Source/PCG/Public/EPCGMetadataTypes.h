#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTypes.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataTypes : uint8 {
    Float,
    Double,
    Integer32,
    Integer64,
    Vector2,
    Vector,
    Vector4,
    Quaternion,
    Transform,
    String,
    Boolean,
    Rotator,
    Name,
    Count,
    Unknown = 255,
};

