#pragma once
#include "CoreMinimal.h"
#include "EPCGChangeType.generated.h"

UENUM(BlueprintType)
enum class EPCGChangeType : uint8 {
    None,
    Cosmetic,
    Settings,
    Input = 4,
    Edge = 8,
    Node = 16,
    Structural = 32,
};

