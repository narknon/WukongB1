#pragma once
#include "CoreMinimal.h"
#include "ConditionsTarget.generated.h"

UENUM(BlueprintType)
enum class ConditionsTarget : uint8 {
    Player,
    FindByTag,
    ManualSelect,
};

