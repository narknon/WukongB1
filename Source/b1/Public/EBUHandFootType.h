#pragma once
#include "CoreMinimal.h"
#include "EBUHandFootType.generated.h"

UENUM(BlueprintType)
enum class EBUHandFootType : uint8 {
    None,
    LeftHand,
    RightHand,
    LeftFoot,
    RightFoot,
};

