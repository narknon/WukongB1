#pragma once
#include "CoreMinimal.h"
#include "OnInputAxisEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputAxisEvent, float, Axis, FName, AxisName);

