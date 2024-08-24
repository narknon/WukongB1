#pragma once
#include "CoreMinimal.h"
#include "EGsStreamingLevelManagePolice.generated.h"

UENUM(BlueprintType)
enum class EGsStreamingLevelManagePolice : uint8 {
    SameAsPrevious,
    DefaultLoadAndShow,
    DefaultUnload,
};

