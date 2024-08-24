#pragma once
#include "CoreMinimal.h"
#include "EConstructionSystemCursorVisiblity.generated.h"

UENUM(BlueprintType)
enum class EConstructionSystemCursorVisiblity : uint8 {
    Visible,
    VisibleInvalid,
    Hidden,
};

