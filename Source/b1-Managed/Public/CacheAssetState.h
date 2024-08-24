#pragma once
#include "CoreMinimal.h"
#include "CacheAssetState.generated.h"

UENUM(BlueprintType)
enum class CacheAssetState : uint8 {
    Unloaded,
    Loading,
    Loaded,
    FileNotFound = 255,
};

