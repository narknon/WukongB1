#pragma once
#include "CoreMinimal.h"
#include "DonCollisionSamplerCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDonCollisionSamplerCallback, bool, bTaskSuccessful);

