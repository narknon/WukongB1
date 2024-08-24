#pragma once
#include "CoreMinimal.h"
#include "EGSInputType.h"
#include "GSOnInputTypeChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputTypeChangeEvent, EGSInputType, InputType);

