#pragma once
#include "CoreMinimal.h"
#include "BeginEndOverlapTriggerDirectionType.generated.h"

UENUM(BlueprintType)
enum class BeginEndOverlapTriggerDirectionType : uint8 {
    None,
    SameDirection,
    DiffDirection,
};

