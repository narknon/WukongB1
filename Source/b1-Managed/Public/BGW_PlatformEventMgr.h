#pragma once
#include "CoreMinimal.h"
#include "BGWPlatformEventMgr.h"
#include "BGW_PlatformEventMgr.generated.h"

UCLASS(Blueprintable)
class UBGW_PlatformEventMgr : public UBGWPlatformEventMgr {
    GENERATED_BODY()
public:
    UBGW_PlatformEventMgr();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationInitCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationExitCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUserLoginChangeCS(bool bIsSignIn, int32 PlatformUserId, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationResumeCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationPreExitCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationSuspendCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationTerminateCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationDeactivateCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplicationReactivatedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNetworkInitializedChangeCS(bool bIsNetworkInitialized);
    
};

