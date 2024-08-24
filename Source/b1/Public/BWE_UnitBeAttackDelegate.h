#pragma once
#include "CoreMinimal.h"
#include "BWE_UnitBeAttackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBWE_UnitBeAttack, int32, ResID);

