#pragma once
#include "CoreMinimal.h"
#include "EGSCloudMoveRestrictType.generated.h"

UENUM(BlueprintType)
enum class EGSCloudMoveRestrictType : uint8 {
    None,
    ForbidEnableCloudMove,
    ForbidDisableCloudMove,
};

