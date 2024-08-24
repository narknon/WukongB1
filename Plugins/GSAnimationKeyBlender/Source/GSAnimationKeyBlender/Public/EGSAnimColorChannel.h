#pragma once
#include "CoreMinimal.h"
#include "EGSAnimColorChannel.generated.h"

UENUM(BlueprintType)
enum class EGSAnimColorChannel : uint8 {
    GSA_COLOR_MIN,
    GSA_COLOR_RED,
    GSA_COLOR_GREEN,
    GSA_COLOR_BLUE,
    GSA_COLOR_ALPHA,
};

