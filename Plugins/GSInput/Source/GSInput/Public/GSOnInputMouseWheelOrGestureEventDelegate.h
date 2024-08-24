#pragma once
#include "CoreMinimal.h"
#include "GSOnInputMouseWheelOrGestureEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputMouseWheelOrGestureEvent, float, InWheelDelta);

