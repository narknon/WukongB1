#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibReplication.generated.h"

class AActor;

UCLASS(Blueprintable)
class UBGUFuncLibReplication : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibReplication();

    UFUNCTION(BlueprintCallable)
    static int32 GetActorNetRole(AActor* Owner);
    
};

