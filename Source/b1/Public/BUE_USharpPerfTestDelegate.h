#pragma once
#include "CoreMinimal.h"
#include "BUE_USharpPerfTestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBUE_USharpPerfTest, int32, AttrID, int32, RealNewValue, int32, RealOrgValue, int32, ExpectChangeValue);

