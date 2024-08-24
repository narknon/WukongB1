#pragma once
#include "CoreMinimal.h"
#include "DefaultCamArmMode.generated.h"

UENUM(BlueprintType)
enum class DefaultCamArmMode : uint8 {
    Default,
    Close,
    Normal,
    Far,
    Free,
};

