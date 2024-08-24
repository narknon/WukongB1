#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibSelectTargetsCS.generated.h"

class AActor;

UCLASS(Blueprintable)
class UBGUFuncLibSelectTargetsCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibSelectTargetsCS();

    UFUNCTION(BlueprintCallable)
    static void DeadPhyTest(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void DeadPhyReset(AActor* Unit);
    
};

