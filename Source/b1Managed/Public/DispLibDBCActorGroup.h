#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCActorGroup.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCActorGroup : uint8 {
    None,
    BattleUnit,
    Interact,
    Projectile,
    EquipPreview,
    DLDWorld,
};

