#pragma once
#include "CoreMinimal.h"
#include "EGSIconPerformanceType.generated.h"

UENUM(BlueprintType)
enum class EGSIconPerformanceType : uint8 {
    Normal,
    HoldInteract,
    Combo,
};

