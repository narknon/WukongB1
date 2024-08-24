#pragma once
#include "CoreMinimal.h"
#include "ProjectileSpawnerType.generated.h"

UENUM(BlueprintType)
enum class ProjectileSpawnerType : uint8 {
    EffectCaster,
    EffectTarget,
    EffectRootCaster,
};

