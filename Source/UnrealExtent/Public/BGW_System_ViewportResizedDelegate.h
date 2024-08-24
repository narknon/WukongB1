#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGW_System_ViewportResizedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBGW_System_ViewportResized, FIntPoint, NewSize);

