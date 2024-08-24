#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQSExParam.h"
#include "BUE_RunEQSFinishDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FBUE_RunEQSFinish, TArray<FVector>, Results, TArray<float>, Scores, FGSEQSExParam, ExParam, int32, QueryID);

