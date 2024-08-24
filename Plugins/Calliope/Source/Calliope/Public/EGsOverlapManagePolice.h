#pragma once
#include "CoreMinimal.h"
#include "EGsOverlapManagePolice.generated.h"

UENUM(BlueprintType)
enum class EGsOverlapManagePolice : uint8 {
    SameAsPrevious,
    KeepEnable,
    KeepDisable,
};

