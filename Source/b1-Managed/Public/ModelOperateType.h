#pragma once
#include "CoreMinimal.h"
#include "ModelOperateType.generated.h"

UENUM(BlueprintType)
enum class ModelOperateType : uint8 {
    UnableOperate,
    OnlyYaw,
    ZoomYaw,
    ZoomYawPitch,
};

