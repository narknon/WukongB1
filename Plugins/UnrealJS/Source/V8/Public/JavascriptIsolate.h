#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptHeapStatistics.h"
#include "JavascriptIsolate.generated.h"

class UJavascriptContext;

UCLASS(Blueprintable)
class V8_API UJavascriptIsolate : public UObject {
    GENERATED_BODY()
public:
    UJavascriptIsolate();

    UFUNCTION(BlueprintCallable)
    void Init(bool bIsEditor);
    
    UFUNCTION(BlueprintCallable)
    void GetHeapStatistics(FJavascriptHeapStatistics& Statistics);
    
    UFUNCTION(BlueprintCallable)
    UJavascriptContext* CreateContext();
    
};

