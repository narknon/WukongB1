#pragma once
#include "CoreMinimal.h"
#include "HitItemAudioType.generated.h"

UENUM(BlueprintType)
enum class HitItemAudioType : uint8 {
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

