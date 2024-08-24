#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnMouseWheelEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnMouseWheelEvent, const FPointerEvent&, InWheelEvent);

