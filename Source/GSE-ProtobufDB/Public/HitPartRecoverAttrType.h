#pragma once
#include "CoreMinimal.h"
#include "HitPartRecoverAttrType.generated.h"

UENUM(BlueprintType)
enum class HitPartRecoverAttrType : uint8 {
    None,
    Hp,
    Mp,
    Stamina,
    Pevalue,
    TransEnergy,
};

