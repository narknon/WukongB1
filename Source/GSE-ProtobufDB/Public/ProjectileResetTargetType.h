#pragma once
#include "CoreMinimal.h"
#include "ProjectileResetTargetType.generated.h"

UENUM(BlueprintType)
enum class ProjectileResetTargetType : uint8 {
    None,
    ProjectileSpawner,
    CurTargetProjectileSpawner = 4,
    UsePointSetCached,
    UseSkillBaseTarget = 7,
    SceneItemCached,
    InnerTarget,
    EQSPoint,
};

