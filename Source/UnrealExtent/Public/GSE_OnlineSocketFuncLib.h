#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_OnlineSocketFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_OnlineSocketFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_OnlineSocketFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetLocalListenPort(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FString GetLocalListenIp(UObject* WorldContext);
    
};

