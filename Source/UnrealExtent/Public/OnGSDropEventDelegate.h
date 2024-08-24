#pragma once
#include "CoreMinimal.h"
#include "OnGSDropEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGSDropEvent, TArray<FString>, DraggedItems, TArray<FString>, DraggedFiles, TArray<FString>, DraggedFolders);

