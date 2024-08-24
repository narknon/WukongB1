#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HttpResposeListener.generated.h"

UCLASS(Blueprintable)
class UHttpResposeListener : public UObject {
    GENERATED_BODY()
public:
    UHttpResposeListener();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRequestProgress(int32 sentBytes, int32 lReceivedBytes, int32 lTotalBytes);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReponseComplete(bool bSuccess, int32 HttpCode, const TArray<uint8>& Content);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNeedProgress() const;
    
};

