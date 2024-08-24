#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSConnectionInfo.h"
#include "GSE_NetFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_NetFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_NetFuncLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetAllActiveConnectionInfo(UObject* WorldContext, TArray<FGSConnectionInfo>& ConnectionInfos);
    
};

