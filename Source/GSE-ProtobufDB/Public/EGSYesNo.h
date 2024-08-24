#pragma once
#include "CoreMinimal.h"
#include "EGSYesNo.generated.h"

UENUM(BlueprintType)
enum class EGSYesNo : uint8 {
    No,
    Yes,
    EnumMax = 3,
};

