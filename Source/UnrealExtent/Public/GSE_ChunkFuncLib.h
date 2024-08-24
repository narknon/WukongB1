#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_ChunkFuncLib.generated.h"

UCLASS(Blueprintable)
class UGSE_ChunkFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_ChunkFuncLib();

private:
    UFUNCTION(BlueprintCallable)
    static bool TryGetPlayGoInfo(int64& ProgressSize, int64& TotalSize, double& CurrentTime);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayGoInstalling();
    
};

