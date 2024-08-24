#pragma once
#include "CoreMinimal.h"
#include "BGW_System_MonitorAsPrimaryChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBGW_System_MonitorAsPrimaryChange, int32, TargetPrimaryMonitorIndex);

