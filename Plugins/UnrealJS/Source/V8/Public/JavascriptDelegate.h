#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptDelegate.generated.h"

UCLASS(Blueprintable)
class V8_API UJavascriptDelegate : public UObject {
    GENERATED_BODY()
public:
    UJavascriptDelegate();

    UFUNCTION(BlueprintCallable)
    void Fire();
    
};

