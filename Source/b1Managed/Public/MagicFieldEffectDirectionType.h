#pragma once
#include "CoreMinimal.h"
#include "MagicFieldEffectDirectionType.generated.h"

UENUM(BlueprintType)
enum class MagicFieldEffectDirectionType : uint8 {
    FrontBack,
    FrontBackLeftRight,
};

