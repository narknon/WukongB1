#pragma once
#include "CoreMinimal.h"
#include "EquipFXType.generated.h"

UENUM(BlueprintType)
enum class EquipFXType : uint8 {
    None,
    Wear,
    Upgrade,
    UpgradeChange,
};

