#pragma once
#include "CoreMinimal.h"
#include "HttpResposeListener.h"
#include "UGSSdkHttpRequestCallbackListener.generated.h"

UCLASS(Blueprintable)
class UUGSSdkHttpRequestCallbackListener : public UHttpResposeListener {
    GENERATED_BODY()
public:
    UUGSSdkHttpRequestCallbackListener();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReponseComplete(bool bSuccess, int32 HttpCode, const TArray<uint8>& Content);
    
};

