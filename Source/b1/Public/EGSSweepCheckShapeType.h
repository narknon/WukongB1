#pragma once
#include "CoreMinimal.h"
#include "EGSSweepCheckShapeType.generated.h"

UENUM(BlueprintType)
enum class EGSSweepCheckShapeType : uint8 {
    Zero,
    BoxShape,
    SphereShape,
    CapsuleShape,
    MAX = 255,
};

