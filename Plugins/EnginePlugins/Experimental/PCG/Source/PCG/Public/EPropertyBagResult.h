#pragma once
#include "CoreMinimal.h"
#include "EPropertyBagResult.generated.h"

UENUM(BlueprintType)
enum class EPropertyBagResult : uint8 {
    Success,
    TypeMismatch,
    OutOfBounds,
    PropertyNotFound,
};

