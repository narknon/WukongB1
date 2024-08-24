#pragma once
#include "CoreMinimal.h"
#include "EACFactDataOperateType.generated.h"

UENUM(BlueprintType)
enum class EACFactDataOperateType : uint8 {
    None,
    Replace,
    Increase,
    Decrease,
    Or,
    And,
};

