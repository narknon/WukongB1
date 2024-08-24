#pragma once
#include "CoreMinimal.h"
#include "MaterialLayerParamType.generated.h"

UENUM(BlueprintType)
enum class MaterialLayerParamType : uint8 {
    None,
    Scalar,
    LinearColor,
    ScalarCurve,
    ColorCurve,
};

