#pragma once
#include "CoreMinimal.h"
#include "OnMontagePlayNotifyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMontagePlayNotifyDelegate, FName, NotifyName);

