#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineSession.h"
#include "B1OnlineSession.generated.h"

class UNetDriver;
class UWorld;

UCLASS(Blueprintable)
class UB1OnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
    UB1OnlineSession();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOnlineSessionCS(FName SessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterOnlineDelegatesCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSessionUserInviteAcceptedCS(const bool bWasSuccess, const int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDisconnectCS(UWorld* World, UNetDriver* NetDriver);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndOnlineSessionCS(FName SessionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearOnlineDelegatesCS();
    
};

