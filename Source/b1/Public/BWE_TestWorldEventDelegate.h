#pragma once
#include "CoreMinimal.h"
#include "BWE_TestWorldEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBWE_TestWorldEvent, float, AxisValue);

