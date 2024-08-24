#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GSOnInputKeyDownEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputKeyDownEvent, FKey, InKey);

