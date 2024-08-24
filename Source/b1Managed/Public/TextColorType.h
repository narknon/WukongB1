#pragma once
#include "CoreMinimal.h"
#include "TextColorType.generated.h"

UENUM(BlueprintType)
enum class TextColorType : uint8 {
    None,
    Normal,
    Actived,
    Disable,
};

