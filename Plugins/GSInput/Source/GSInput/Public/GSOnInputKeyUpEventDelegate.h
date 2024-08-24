#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GSOnInputKeyUpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputKeyUpEvent, FKey, InKey);

