#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_SuperRSFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SuperRSFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SuperRSFuncLib();

private:
    UFUNCTION(BlueprintCallable)
    static bool GetIsXeSSSupported();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsDX12();
    
    UFUNCTION(BlueprintCallable)
    static bool GetDLSSLisFeatureSupported();
    
};

