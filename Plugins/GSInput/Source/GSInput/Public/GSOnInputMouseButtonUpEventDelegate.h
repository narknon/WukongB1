#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GSOnInputMouseButtonUpEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputMouseButtonUpEvent, FKey, InKey);

