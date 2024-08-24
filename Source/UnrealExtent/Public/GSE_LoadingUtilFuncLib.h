#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_LoadingUtilFuncLib.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_LoadingUtilFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_LoadingUtilFuncLib();

    UFUNCTION(BlueprintCallable)
    static UObject* SyncLoadObject(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void ClientSetBlockOnAsyncLoading(APlayerController* PlayerController);
    
};

