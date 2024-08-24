#pragma once
#include "CoreMinimal.h"
#include "EGSAnimMarginChannel.generated.h"

UENUM(BlueprintType)
enum class EGSAnimMarginChannel : uint8 {
    GSA_MARGIN_MIN,
    GSA_MARGIN_TOP,
    GSA_MARGIN_LEFT,
    GSA_MARGIN_RIGHT,
    GSA_MARGIN_BOTTOM,
};

