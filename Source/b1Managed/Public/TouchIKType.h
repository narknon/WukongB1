#pragma once
#include "CoreMinimal.h"
#include "TouchIKType.generated.h"

UENUM(BlueprintType)
enum class TouchIKType : uint8 {
    LeftHand,
    RightHand,
    LeftFoot,
    RightFoot,
    Head,
    Tail,
    Weapon,
    EnumMax,
};

