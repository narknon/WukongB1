#pragma once
#include "CoreMinimal.h"
#include "EBGURunEQSObjReason.generated.h"

UENUM(BlueprintType)
enum class EBGURunEQSObjReason : uint8 {
    None,
    Teleport,
    Summon,
    RandomPatrol,
    GenPointSet,
};

