#pragma once
#include "CoreMinimal.h"
#include "EAnimSeqAssetLoadStatType.generated.h"

UENUM(BlueprintType)
enum class EAnimSeqAssetLoadStatType : uint8 {
    INVALID,
    UNLOAD,
    LOADING,
    LOADED,
};

