#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSOnInputMouseMoveEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGSOnInputMouseMoveEvent, FVector2D, InMousePos);

