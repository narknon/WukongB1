#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGW_ILRuntimeCrossBinding.generated.h"

UCLASS(Blueprintable)
class UBGW_ILRuntimeCrossBinding : public UObject {
    GENERATED_BODY()
public:
    UBGW_ILRuntimeCrossBinding();

    UFUNCTION(BlueprintCallable)
    static void GenerateCrossBindingCode_AutoTest();
    
};

