#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCEndReason.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCEndReason : uint8 {
    StandardEnd,
    Break,
    MainCompDeath,
    MinorCompDeath,
    ForceStop,
};

