#pragma once
#include "CoreMinimal.h"
#include "EGSStatType.generated.h"

UENUM(BlueprintType)
enum class EGSStatType : uint8 {
    NONE,
    CYCLE,
    MEMORY,
    NUM,
};

