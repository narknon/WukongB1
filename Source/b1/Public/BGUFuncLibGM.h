#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IntPtr.h"
#include "BGUFuncLibGM.generated.h"

UCLASS(Blueprintable)
class B1_API UBGUFuncLibGM : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibGM();

    UFUNCTION(BlueprintCallable)
    static FIntPtr TestIntPtr(int32 Count, const FIntPtr& InputPtr);
    
};

