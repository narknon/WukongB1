#pragma once
#include "CoreMinimal.h"
#include "ComboTargetType.generated.h"

UENUM(BlueprintType)
enum class ComboTargetType : uint8 {
    None,
    CurrentAITarget,
    Player,
};

