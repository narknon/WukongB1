#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IL2CPPUnitTestFuncLib.generated.h"

UCLASS(Blueprintable)
class UIL2CPPUnitTestFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIL2CPPUnitTestFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIL2CPPTestValue(int32 TestVal);
    
};

