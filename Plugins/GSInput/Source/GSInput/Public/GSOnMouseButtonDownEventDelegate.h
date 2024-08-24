#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnMouseButtonDownEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnMouseButtonDownEvent, const FPointerEvent&, InMouseEvent);

