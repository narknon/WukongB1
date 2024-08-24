#pragma once
#include "CoreMinimal.h"
#include "AreaType.generated.h"

UENUM(BlueprintType)
enum class AreaType : uint8 {
    SimpleTrigger,
    Volume,
};

