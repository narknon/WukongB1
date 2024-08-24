#pragma once
#include "CoreMinimal.h"
#include "ProjectileBaseType.generated.h"

UENUM(BlueprintType)
enum class ProjectileBaseType : uint8 {
    None,
    ProjectileSpawner,
    EffectCaster,
    EffectTarget,
    CurTarget_ProjectileSpawner,
    UsePointSetCached,
    UseEffectPosition,
    UseSkillBaseTarget,
    SceneItemCached,
    EffectRootCaster,
    UseEQSPoint,
    MutilTarget,
    LocalPlayer,
};

