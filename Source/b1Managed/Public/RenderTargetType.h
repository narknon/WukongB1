#pragma once
#include "CoreMinimal.h"
#include "RenderTargetType.generated.h"

UENUM(BlueprintType)
enum class RenderTargetType : uint8 {
    None,
    BeAttacked,
    TTTB,
    Shelter,
};

