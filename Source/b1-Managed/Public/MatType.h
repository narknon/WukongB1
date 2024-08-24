#pragma once
#include "CoreMinimal.h"
#include "MatType.generated.h"

UENUM(BlueprintType)
enum class MatType : uint8 {
    Scale,
    Vector,
    Texture,
};

