#pragma once
#include "CoreMinimal.h"
#include "OnSingleSetLevelsStateOperationFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSingleSetLevelsStateOperationFinished, const FString&, TargetLevelsKeyword, const FString&, TargetLevelState, int32, OperationID);

