#pragma once
#include "CoreMinimal.h"
#include "EnShortcutType.generated.h"

UENUM(BlueprintType)
enum class EnShortcutType : uint8 {
    INIT,
    ITEM,
    SPELL,
    TRANSSPELL,
};

