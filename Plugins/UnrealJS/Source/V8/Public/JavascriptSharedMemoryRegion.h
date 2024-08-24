#pragma once
#include "CoreMinimal.h"
#include "JavascriptMemoryObject.h"
#include "JavascriptSharedMemoryRegion.generated.h"

class UJavascriptSharedMemoryRegion;

UCLASS(Blueprintable)
class V8_API UJavascriptSharedMemoryRegion : public UJavascriptMemoryObject {
    GENERATED_BODY()
public:
    UJavascriptSharedMemoryRegion();

    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    static UJavascriptSharedMemoryRegion* Create(const FName& Name, bool bCreate, bool bRead, bool bWrite, int32 Size);
    
};

