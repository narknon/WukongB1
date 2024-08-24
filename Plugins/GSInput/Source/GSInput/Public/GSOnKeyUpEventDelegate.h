#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnKeyUpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnKeyUpEvent, const FKeyEvent&, InKeyEvent);

