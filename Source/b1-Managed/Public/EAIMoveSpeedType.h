#pragma once
#include "CoreMinimal.h"
#include "EAIMoveSpeedType.generated.h"

UENUM(BlueprintType)
enum class EAIMoveSpeedType : uint8 {
    JOG,
    RUN,
    SPRINT,
};

