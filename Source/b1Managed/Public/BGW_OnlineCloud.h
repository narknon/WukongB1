#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineCloud.h"
#include "BGW_OnlineCloud.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlineCloud : public UBGWOnlineCloud {
    GENERATED_BODY()
public:
    UBGW_OnlineCloud();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReadUserFilesCompleteCS(const FString& Filename, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeleteUserFilesCompleteCS(const FString& Filename, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnumerateUserFilesCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWriteUserCloudFileCompleteCS(const FString& Filename, bool bWasSuccessful);
    
};

