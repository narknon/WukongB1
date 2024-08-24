#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSDataShareAPI.generated.h"

UCLASS(Blueprintable)
class GSDATASHARE_API UGSDataShareAPI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSDataShareAPI();

    UFUNCTION(BlueprintCallable)
    static int32 BPReloadData();
    
    UFUNCTION(BlueprintCallable)
    static int32 BPInitLoadData();
    
    UFUNCTION(BlueprintCallable)
    static int32 BPCheckDataValid();
    
};

