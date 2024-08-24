#pragma once
#include "CoreMinimal.h"
#include "TWVectorUseType.generated.h"

UENUM(BlueprintType)
enum class TWVectorUseType : uint8 {
    UsePredefinedVectorSlot0,
    UsePredefinedVectorSlot1,
    UsePredefinedVectorSlot2,
    UsePredefinedVectorSlot3,
    UseVectorBase,
};

