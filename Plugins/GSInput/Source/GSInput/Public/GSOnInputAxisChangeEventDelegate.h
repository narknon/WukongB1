#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "GSOnInputAxisChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGSOnInputAxisChangeEvent, FKey, InKey, float, InAxisValue);

