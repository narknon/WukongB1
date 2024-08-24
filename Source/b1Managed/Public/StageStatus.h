#pragma once
#include "CoreMinimal.h"
#include "StageStatus.generated.h"

UENUM(BlueprintType)
enum class StageStatus : uint8 {
    Default,
    Activated,
    Finished,
};

