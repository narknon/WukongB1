#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELogVerbosity_JS.h"
#include "JavascriptOutputDevice.generated.h"

UCLASS(Blueprintable)
class V8_API UJavascriptOutputDevice : public UObject {
    GENERATED_BODY()
public:
    UJavascriptOutputDevice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessage(const FString& Message, ELogVerbosity_JS Verbosity, FName Category);
    
    UFUNCTION(BlueprintCallable)
    static void Log(FName Category, ELogVerbosity_JS Verbosity, const FString& Filename, int32 LineNumber, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
};

