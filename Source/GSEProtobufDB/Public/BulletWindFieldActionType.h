#pragma once
#include "CoreMinimal.h"
#include "BulletWindFieldActionType.generated.h"

UENUM(BlueprintType)
enum class BulletWindFieldActionType : uint8 {
    None,
    Explode,
    AutoRelease,
};

