#pragma once
#include "CoreMinimal.h"
#include "SurfaceTypeOverrideMethod.generated.h"

UENUM(BlueprintType)
enum class SurfaceTypeOverrideMethod : uint8 {
    None,
    Replace,
    Generate,
};

