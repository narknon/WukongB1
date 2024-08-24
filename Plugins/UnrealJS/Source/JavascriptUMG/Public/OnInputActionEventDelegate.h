#pragma once
#include "CoreMinimal.h"
#include "OnInputActionEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputActionEvent, FName, ActionName);

