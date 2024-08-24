#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CachedActivityIntentReceivedParamCS.h"
#include "GSE_GameIntentFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_GameIntentFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_GameIntentFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool GetCachedActivityIntentReceivedParam(FCachedActivityIntentReceivedParamCS& OutParamCS);
    
};

