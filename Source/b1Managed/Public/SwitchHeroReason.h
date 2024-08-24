#pragma once
#include "CoreMinimal.h"
#include "SwitchHeroReason.generated.h"

UENUM(BlueprintType)
enum class SwitchHeroReason : uint8 {
    Manual,
    Dead,
};

