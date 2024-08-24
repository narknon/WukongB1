#pragma once
#include "CoreMinimal.h"
#include "GuideType.generated.h"

UENUM(BlueprintType)
enum class GuideType : uint8 {
    Battle,
    Adventure,
    EnumMax,
};

