#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_GridlyFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_GridlyFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_GridlyFuncLib();

private:
    UFUNCTION(BlueprintCallable)
    static void RequestPage(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetSupportCultures();
    
};

