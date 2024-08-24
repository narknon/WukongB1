#pragma once
#include "CoreMinimal.h"
#include "AreaAbilityType.generated.h"

UENUM(BlueprintType)
enum class AreaAbilityType : uint8 {
    Default,
    PlayDialogue = 8,
};

