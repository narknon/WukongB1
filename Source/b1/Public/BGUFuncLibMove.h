#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibMove.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable)
class B1_API UBGUFuncLibMove : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibMove();

    UFUNCTION(BlueprintCallable)
    static void BGUMovementForceSaveBaseLocation(UCharacterMovementComponent* MoveComp);
    
};

