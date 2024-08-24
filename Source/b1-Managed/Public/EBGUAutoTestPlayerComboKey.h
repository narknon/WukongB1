#pragma once
#include "CoreMinimal.h"
#include "EBGUAutoTestPlayerComboKey.generated.h"

UENUM(BlueprintType)
enum class EBGUAutoTestPlayerComboKey : uint8 {
    None,
    LightAttackDown,
    LightAttackUp,
    HeavyAttackDown,
    HeavyAttackUp,
    Dodge,
};

