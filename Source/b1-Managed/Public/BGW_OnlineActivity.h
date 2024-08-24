#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineActivity.h"
#include "BGW_OnlineActivity.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlineActivity : public UBGWOnlineActivity {
    GENERATED_BODY()
public:
    UBGW_OnlineActivity();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndActivityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartActivityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResumeActivityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetActivityPriorityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameActivityActivationCompleteCS(const FString& sActivityId, const FString& sSessionStr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetActivityAvailabilityCompleteCS(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResetAllActiveActivitiesCompleteCS(bool bWasSuccessful);
    
};

