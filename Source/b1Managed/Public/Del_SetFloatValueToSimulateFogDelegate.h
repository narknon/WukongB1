#pragma once
#include "CoreMinimal.h"
#include "Del_SetFloatValueToSimulateFogDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDel_SetFloatValueToSimulateFog, FName, ParamName, float, FloatParam);

