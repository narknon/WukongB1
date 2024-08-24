#pragma once
#include "CoreMinimal.h"
#include "EBGUFSMEventName.h"
#include "BUE_BP_AI_FSMEventTriggerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBUE_BP_AI_FSMEventTrigger, EBGUFSMEventName, EventID);

