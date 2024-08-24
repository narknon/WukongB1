#pragma once
#include "CoreMinimal.h"
#include "EBGUBulletSweepCheckType.generated.h"

UENUM(BlueprintType)
enum class EBGUBulletSweepCheckType : uint8 {
    BoxShape,
    SphereShape,
    CapsuleShape,
    EbgubulletSweepCheckTypeSceneItem,
    CustomShape,
    EnumMax,
};

