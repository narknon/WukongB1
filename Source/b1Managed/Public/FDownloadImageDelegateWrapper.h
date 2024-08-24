#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FDownloadImageDelegateWrapper.generated.h"

class UTexture2DDynamic;

UCLASS(Blueprintable)
class UFDownloadImageDelegateWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFDownloadImageDelegateWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback(UTexture2DDynamic* Texture);
    
};

