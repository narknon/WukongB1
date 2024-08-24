#pragma once
#include "CoreMinimal.h"
#include "EGSInputType.h"
#include "GSOnInputPreProcessEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputPreProcessEvent, EGSInputType, InputType);

