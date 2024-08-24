#pragma once
#include "CoreMinimal.h"
#include "BUE_BP_UnitDieDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBUE_BP_UnitDie, AActor*, Attacker);

