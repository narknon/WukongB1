#pragma once
#include "CoreMinimal.h"
#include "EDefaultSubstanceTextureSize.generated.h"

UENUM(BlueprintType)
enum EDefaultSubstanceTextureSize {
    Zero,
    Size_16 = 4,
    Size_32,
    Size_64,
    Size_128,
    Size_256,
    Size_512,
    Size_1024,
    Size_2048,
    Size_4096,
};

