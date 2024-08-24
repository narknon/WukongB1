#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BUI_FOnButtonReleasedEvent_LamdaHolder.generated.h"

UCLASS(Blueprintable)
class UBUI_FOnButtonReleasedEvent_LamdaHolder : public UObject {
    GENERATED_BODY()
public:
    UBUI_FOnButtonReleasedEvent_LamdaHolder();

    UFUNCTION(BlueprintCallable)
    void LamdaCB();
    
};

