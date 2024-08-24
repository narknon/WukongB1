#pragma once
#include "CoreMinimal.h"
#include "EBGUBulletType.generated.h"

UENUM(BlueprintType)
enum class EBGUBulletType : uint8 {
    NormalSpawn,
    Weapon,
    SceneItem,
    ModularActor = 5,
    WeaponSceneItem,
    MultiTarget,
    EnumMax,
};

