#pragma once
#include "CoreMinimal.h"
#include "BED_ComboNode_State.h"
#include "BED_ComboNode_Restart.generated.h"

UCLASS(Blueprintable)
class UBED_ComboNode_Restart : public UBED_ComboNode_State {
    GENERATED_BODY()
public:
    UBED_ComboNode_Restart();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextInputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

