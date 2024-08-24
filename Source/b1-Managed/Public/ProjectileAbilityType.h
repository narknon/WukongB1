#pragma once
#include "CoreMinimal.h"
#include "ProjectileAbilityType.generated.h"

UENUM(BlueprintType)
enum class ProjectileAbilityType : uint8 {
    Default,
    DynamicScale = 2,
    LaserBullet = 4,
    ProceduralEnvInteract = 8,
    BulletMatMerge = 16,
    DestructibleBullet = 32,
    ThrowUpDeadUnit = 64,
    WindBrokenAudio = 128,
};

