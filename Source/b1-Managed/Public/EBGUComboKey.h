#pragma once
#include "CoreMinimal.h"
#include "EBGUComboKey.generated.h"

UENUM(BlueprintType)
enum class EBGUComboKey : uint8 {
    None,
    LightAttackDown,
    HeavyAttackDown,
    LightAttackUp,
    HeavyAttackUp,
    RollDown,
    RollUp,
};

