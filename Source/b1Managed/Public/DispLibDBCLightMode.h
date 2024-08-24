#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCLightMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCLightMode : uint8 {
    PointLight,
    SpotLight,
};

