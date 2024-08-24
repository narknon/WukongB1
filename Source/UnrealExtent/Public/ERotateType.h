#pragma once
#include "CoreMinimal.h"
#include "ERotateType.generated.h"

UENUM(BlueprintType)
enum class ERotateType : uint8 {
    PITCH,
    YAW,
    ROLL,
};

