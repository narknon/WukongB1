#pragma once
#include "CoreMinimal.h"
#include "TileItemScene.generated.h"

UENUM(BlueprintType)
enum class TileItemScene : uint8 {
    None,
    EquipItem,
    GearItem,
    RZDItem,
    ShopItem,
    ShopEquipItem,
    StrengthItem,
    StrengthRZDItem,
};

