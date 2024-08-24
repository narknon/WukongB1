#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataMakeRotatorOp.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataMakeRotatorOp : uint8 {
    MakeRotFromX,
    MakeRotFromY,
    MakeRotFromZ,
    MakeRotFromXY,
    MakeRotFromYX,
    MakeRotFromXZ,
    MakeRotFromZX,
    MakeRotFromYZ,
    MakeRotFromZY,
    MakeRotFromAxes,
    MakeRotFromAngles,
};

