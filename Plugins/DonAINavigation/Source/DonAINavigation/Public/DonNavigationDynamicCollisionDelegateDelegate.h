#pragma once
#include "CoreMinimal.h"
#include "DonNavigationDynamicCollisionPayload.h"
#include "DonNavigationDynamicCollisionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDonNavigationDynamicCollisionDelegate, const FDonNavigationDynamicCollisionPayload&, Data);

