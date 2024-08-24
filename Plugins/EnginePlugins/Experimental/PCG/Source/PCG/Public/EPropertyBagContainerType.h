#pragma once
#include "CoreMinimal.h"
#include "EPropertyBagContainerType.generated.h"

UENUM(BlueprintType)
enum class EPropertyBagContainerType : uint8 {
    None,
    Array,
    Count,
};

