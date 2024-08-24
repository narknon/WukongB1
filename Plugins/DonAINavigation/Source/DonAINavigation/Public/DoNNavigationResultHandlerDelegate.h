#pragma once
#include "CoreMinimal.h"
#include "DoNNavigationQueryData.h"
#include "DoNNavigationResultHandlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDoNNavigationResultHandler, const FDoNNavigationQueryData&, Data);

