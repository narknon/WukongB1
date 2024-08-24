#pragma once
#include "CoreMinimal.h"
#include "FixFunctionType.generated.h"

UENUM(BlueprintType)
enum class FixFunctionType : uint8 {
    None,
    AttrBaseModifyAttr,
    AttrBaseAbsModifyAttr,
    PlayerCountAttr,
    PlayerDashengTalentAttr,
    PlayerWinePartnerAttr,
    AttrMulModifyAttr,
};

