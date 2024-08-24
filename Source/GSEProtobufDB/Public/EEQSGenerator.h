#pragma once
#include "CoreMinimal.h"
#include "EEQSGenerator.generated.h"

UENUM(BlueprintType)
enum class EEQSGenerator : uint8 {
    None,
    ConeShape,
    RoundShape,
    RectangleShape,
    RoundShapeFill,
    RoundShapeRandom,
    EnumMax,
};

