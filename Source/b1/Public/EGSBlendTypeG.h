#pragma once
#include "CoreMinimal.h"
#include "EGSBlendTypeG.generated.h"

UENUM(BlueprintType)
enum class EGSBlendTypeG : uint8 {
    GSNone,
    GSLinear,
    GSEaseIn,
    GSEaseOut,
    GSEaseInOut,
    MAX = 255,
};

