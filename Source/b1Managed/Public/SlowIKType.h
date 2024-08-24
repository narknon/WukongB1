#pragma once
#include "CoreMinimal.h"
#include "SlowIKType.generated.h"

UENUM(BlueprintType)
enum class SlowIKType : uint8 {
    None,
    RightHand_WithWeaponR,
    LeftHand_WithWeaponR,
    LeftHand_WithWeaponL,
    RightHand_WithWeaponL,
    DoubleHand_WithWeaponR,
    DoubleHand_WithWeaponL,
};

