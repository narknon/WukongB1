#pragma once
#include "CoreMinimal.h"
#include "ESubstanceGenerationMode.generated.h"

UENUM(BlueprintType)
enum ESubstanceGenerationMode {
    SGM_PlatformDefault,
    SGM_Baked,
    SGM_OnLoadSync,
    SGM_OnLoadSyncAndCache,
    SGM_OnLoadAsync,
    SGM_OnLoadAsyncAndCache,
};

