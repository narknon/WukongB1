#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnMouseButtonDoubleClickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnMouseButtonDoubleClickEvent, const FPointerEvent&, InMouseEvent);

