#pragma once
#include "CoreMinimal.h"
#include "EBGUSpeedCtrlID.generated.h"

UENUM(BlueprintType)
enum class EBGUSpeedCtrlID : uint8 {
    MoveSpeedRate,
    Custom,
    EnumMax,
};

