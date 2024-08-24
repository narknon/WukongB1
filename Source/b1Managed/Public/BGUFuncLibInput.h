#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGSInputModeChangeReason.h"
#include "BGUFuncLibInput.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBGUFuncLibInput : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibInput();

    UFUNCTION(BlueprintCallable)
    static bool IsGamepadType();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetSuperUserInputMode(UObject* WorldContext, bool IsOpen, EGSInputModeChangeReason ChangeReason);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAcceptNavigationAction(bool bOpen);
    
};

