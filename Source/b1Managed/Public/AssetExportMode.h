#pragma once
#include "CoreMinimal.h"
#include "AssetExportMode.generated.h"

UENUM(BlueprintType)
enum class AssetExportMode : uint8 {
    INCREMENT,
    COMPLETELY,
    CUSTOM_NAME,
    ONLY_JSON_DATA,
};

