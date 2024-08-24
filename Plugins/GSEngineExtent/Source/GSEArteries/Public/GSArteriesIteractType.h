#pragma once
#include "CoreMinimal.h"
#include "GSArteriesIteractType.generated.h"

UENUM(BlueprintType)
enum class GSArteriesIteractType : uint8 {
    Spline,
    Box,
    BoxWithSpline,
};

