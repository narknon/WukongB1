#pragma once
#include "CoreMinimal.h"
#include "DispLibSystemActiveMode.generated.h"

UENUM(BlueprintType)
enum class DispLibSystemActiveMode : uint8 {
    NormalActive,
    RefuseNewRequest,
    Deactive,
};

