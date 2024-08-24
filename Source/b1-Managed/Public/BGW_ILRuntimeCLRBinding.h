#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGW_ILRuntimeCLRBinding.generated.h"

UCLASS(Blueprintable)
class UBGW_ILRuntimeCLRBinding : public UObject {
    GENERATED_BODY()
public:
    UBGW_ILRuntimeCLRBinding();

    UFUNCTION(BlueprintCallable)
    static void GenerateClrBindingCode_AutoTest(int32 bClrbinding);
    
};

