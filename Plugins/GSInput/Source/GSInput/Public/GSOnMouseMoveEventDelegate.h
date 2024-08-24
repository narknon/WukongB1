#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnMouseMoveEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnMouseMoveEvent, const FPointerEvent&, InMouseEvent);

