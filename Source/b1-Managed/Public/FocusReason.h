#pragma once
#include "CoreMinimal.h"
#include "FocusReason.generated.h"

UENUM(BlueprintType)
enum class FocusReason : uint8 {
    Init,
    ManualSet,
};

