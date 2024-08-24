#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnKeyDownEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnKeyDownEvent, const FKeyEvent&, InKeyEvent);

