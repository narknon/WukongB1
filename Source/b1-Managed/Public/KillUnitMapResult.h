#pragma once
#include "CoreMinimal.h"
#include "KillUnitMapResult.generated.h"

UENUM(BlueprintType)
enum class KillUnitMapResult : uint8 {
    HeadShot,
    RandomCut,
    Boom,
};

