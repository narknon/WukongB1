#pragma once
#include "CoreMinimal.h"
#include "ESortType.generated.h"

UENUM(BlueprintType)
enum class ESortType : uint8 {
    none,
    big_to_small,
    small_to_big,
};

