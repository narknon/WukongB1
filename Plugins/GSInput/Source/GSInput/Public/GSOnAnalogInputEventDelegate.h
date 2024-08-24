#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "GSOnAnalogInputEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnAnalogInputEvent, const FAnalogInputEvent&, InAnalogInputEvent);

