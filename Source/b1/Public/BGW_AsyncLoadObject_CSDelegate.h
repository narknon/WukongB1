#pragma once
#include "CoreMinimal.h"
#include "BGW_AsyncLoadObject_CSDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBGW_AsyncLoadObject_CS, UObject*, uObject);

