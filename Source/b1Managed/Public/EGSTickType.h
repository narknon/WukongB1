#pragma once
#include "CoreMinimal.h"
#include "EGSTickType.generated.h"

UENUM(BlueprintType)
enum class EGSTickType : uint8 {
    NotSet,
    NeverGSTick,
    AutoGSTick,
    AlwaysGSTick,
};

