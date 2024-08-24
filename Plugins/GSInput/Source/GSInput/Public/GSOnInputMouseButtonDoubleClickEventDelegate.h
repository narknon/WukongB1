#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GSOnInputMouseButtonDoubleClickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputMouseButtonDoubleClickEvent, FKey, InKey);

