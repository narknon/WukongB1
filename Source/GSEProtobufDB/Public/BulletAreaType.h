#pragma once
#include "CoreMinimal.h"
#include "BulletAreaType.generated.h"

UENUM(BlueprintType)
enum class BulletAreaType : uint8 {
    None,
    Round,
    Rectange,
};

