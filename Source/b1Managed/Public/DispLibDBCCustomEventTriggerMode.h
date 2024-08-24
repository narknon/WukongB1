#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCCustomEventTriggerMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCCustomEventTriggerMode : uint8 {
    Standard,
    Immediate,
};

