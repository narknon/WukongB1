#pragma once
#include "CoreMinimal.h"
#include "DispLibDBCPCurvePointColorMode.generated.h"

UENUM(BlueprintType)
enum class DispLibDBCPCurvePointColorMode : uint8 {
    DirectSet,
    CacheCurValue,
    ParamInitialValue,
    OnSpawn_ValueMultiplyRandom_0_1,
    OnSpawn_ValueMultiplyRandom_N1_1,
    ValueMultiplyRandom_0_1,
    ValueMultiplyRandom_N1_1,
};

