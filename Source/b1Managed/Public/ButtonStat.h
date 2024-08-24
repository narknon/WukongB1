#pragma once
#include "CoreMinimal.h"
#include "ButtonStat.generated.h"

UENUM(BlueprintType)
enum class ButtonStat : uint8 {
    Normal,
    Lock,
    Disable,
    NotUse,
    Hide,
};

