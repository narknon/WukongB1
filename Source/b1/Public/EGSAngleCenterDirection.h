#pragma once
#include "CoreMinimal.h"
#include "EGSAngleCenterDirection.generated.h"

UENUM(BlueprintType)
enum class EGSAngleCenterDirection : uint8 {
    Forward,
    Back,
    Left,
    Right,
};

