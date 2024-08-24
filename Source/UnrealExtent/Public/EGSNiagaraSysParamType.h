#pragma once
#include "CoreMinimal.h"
#include "EGSNiagaraSysParamType.generated.h"

UENUM(BlueprintType)
enum EGSNiagaraSysParamType {
    GSNPT_None,
    GSNPT_Float,
    GSNPT_Bool,
    GSNPT_Int,
    GSNPT_Vector,
    GSNPT_LinearColor,
};

