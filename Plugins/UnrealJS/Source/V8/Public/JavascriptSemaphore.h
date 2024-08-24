#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptSemaphore.generated.h"

class UJavascriptSemaphore;

UCLASS(Blueprintable)
class V8_API UJavascriptSemaphore : public UObject {
    GENERATED_BODY()
public:
    UJavascriptSemaphore();

    UFUNCTION(BlueprintCallable)
    void Unlock();
    
    UFUNCTION(BlueprintCallable)
    bool TryLock(int32 NanosecondsToWait);
    
    UFUNCTION(BlueprintCallable)
    void Lock();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    static UJavascriptSemaphore* Create(const FName& Name, bool bCreate, int32 MaxLocks);
    
};

