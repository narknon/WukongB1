#pragma once
#include "CoreMinimal.h"
#include "HitPartReduceAttrType.generated.h"

UENUM(BlueprintType)
enum class HitPartReduceAttrType : uint8 {
    None,
    Hp,
    Mp,
    Stamina,
};

