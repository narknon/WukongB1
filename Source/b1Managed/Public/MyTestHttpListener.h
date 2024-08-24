#pragma once
#include "CoreMinimal.h"
#include "HttpResposeListener.h"
#include "MyTestHttpListener.generated.h"

UCLASS(Blueprintable)
class UMyTestHttpListener : public UHttpResposeListener {
    GENERATED_BODY()
public:
    UMyTestHttpListener();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNeedProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReponseComplete(bool bSuccess, int32 HttpCode, const TArray<uint8>& Content);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestProgress(int32 sentBytes, int32 lReceivedBytes, int32 lTotalBytes);
    
};

