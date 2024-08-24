#pragma once
#include "CoreMinimal.h"
#include "EGSCapturedStatType.generated.h"

UENUM(BlueprintType)
enum class EGSCapturedStatType : uint8 {
    NONE,
    CYCLE,
    MEMORY,
    NUM,
};

