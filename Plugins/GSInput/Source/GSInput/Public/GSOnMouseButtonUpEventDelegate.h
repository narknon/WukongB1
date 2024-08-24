#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnMouseButtonUpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnMouseButtonUpEvent, const FPointerEvent&, InMouseEvent);

