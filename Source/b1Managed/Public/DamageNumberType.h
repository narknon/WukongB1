#pragma once
#include "CoreMinimal.h"
#include "DamageNumberType.generated.h"

UENUM(BlueprintType)
enum class DamageNumberType : uint8 {
    None,
    Normal,
    Critical,
    RecoveryHP,
    Backstap,
};

