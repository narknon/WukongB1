#pragma once
#include "CoreMinimal.h"
#include "RebirthType.generated.h"

UENUM(BlueprintType)
enum class RebirthType : uint8 {
    RebirthPoint,
    Quick,
    SelfRescue,
    EnumMax,
};

