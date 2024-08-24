#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BUI_FOnButtonClickedEvent_LamdaHolder.generated.h"

UCLASS(Blueprintable)
class UBUI_FOnButtonClickedEvent_LamdaHolder : public UObject {
    GENERATED_BODY()
public:
    UBUI_FOnButtonClickedEvent_LamdaHolder();

    UFUNCTION(BlueprintCallable)
    void LamdaCB();
    
};

