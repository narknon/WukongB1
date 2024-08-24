#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineBaseTypes.h"
#include "JavascriptAutomatedTest.h"
#include "JavascriptAutomatedTestInstance.h"
#include "JavascriptTestLibrary.generated.h"

class UObject;
class UWorld;

UCLASS(Blueprintable)
class V8_API UJavascriptTestLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJavascriptTestLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void SetContinue(const FJavascriptAutomatedTestInstance& Test, bool bInContinue);
    
    UFUNCTION(BlueprintCallable)
    static void PushFrameCounter();
    
    UFUNCTION(BlueprintCallable)
    static void PopFrameCounter();
    
    UFUNCTION(BlueprintCallable)
    static UWorld* NewWorld();
    
    UFUNCTION(BlueprintCallable)
    static void InitializeActorsForPlay(UWorld* World, const FURL& URL);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyUObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void Destroy(FJavascriptAutomatedTestInstance& Test);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptAutomatedTestInstance Create(const FJavascriptAutomatedTest& Test);
    
    UFUNCTION(BlueprintCallable)
    static void ClearExecutionInfo(const FJavascriptAutomatedTestInstance& Test);
    
    UFUNCTION(BlueprintCallable)
    static void BeginPlay(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void AddWarning(const FJavascriptAutomatedTestInstance& Test, const FString& InWarning);
    
    UFUNCTION(BlueprintCallable)
    static void AddLogItem(const FJavascriptAutomatedTestInstance& Test, const FString& InLogItem);
    
    UFUNCTION(BlueprintCallable)
    static void AddError(const FJavascriptAutomatedTestInstance& Test, const FString& InError);
    
    UFUNCTION(BlueprintCallable)
    static void AddAnalyticsItem(const FJavascriptAutomatedTestInstance& Test, const FString& InAnalyticsItem);
    
};

