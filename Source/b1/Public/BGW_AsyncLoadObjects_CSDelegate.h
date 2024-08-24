#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGW_AsyncLoadObjects_CSDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FBGW_AsyncLoadObjects_CS, TArray<FSoftObjectPath>, objectsList);

