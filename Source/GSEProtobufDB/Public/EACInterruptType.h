#pragma once
#include "CoreMinimal.h"
#include "EACInterruptType.generated.h"

UENUM(BlueprintType)
enum class EACInterruptType : uint8 {
    None,
    Interrupt,
    Complete,
};

