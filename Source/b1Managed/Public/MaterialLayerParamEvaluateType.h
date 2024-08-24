#pragma once
#include "CoreMinimal.h"
#include "MaterialLayerParamEvaluateType.generated.h"

UENUM(BlueprintType)
enum class MaterialLayerParamEvaluateType : uint8 {
    None,
    Override,
    Additive,
};

