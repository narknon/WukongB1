#pragma once
#include "CoreMinimal.h"
#include "HitItemFXType.generated.h"

UENUM(BlueprintType)
enum class HitItemFXType : uint8 {
    NormalBody,
    Metal,
    Wooden,
    Stone,
    Bone,
    MetalShield,
    WoodenShield,
    Frozen,
    SoftWooden,
    SoftInsect,
    HardInsect,
    EnumMax,
};

