#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GSOnAnyKeyTriggerEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnAnyKeyTriggerEvent, const FKey&, Key);

