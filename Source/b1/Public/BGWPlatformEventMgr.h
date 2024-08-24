#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWPlatformEventMgr.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWPlatformEventMgr : public UObject {
    GENERATED_BODY()
public:
    UBGWPlatformEventMgr();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserLoginChangeCS(bool bIsSignIn, int32 PlatformUserId, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNetworkInitializedChangeCS(bool bIsNetworkInitialized);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationTerminateCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationSuspendCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationResumeCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationReactivatedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationPreExitCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationInitCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationExitCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationDeactivateCS();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};

