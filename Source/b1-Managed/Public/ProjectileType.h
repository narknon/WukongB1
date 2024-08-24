#pragma once
#include "CoreMinimal.h"
#include "ProjectileType.generated.h"

UENUM(BlueprintType)
enum class ProjectileType : uint8 {
    None,
    Bullet,
    MagicField,
};

