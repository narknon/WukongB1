#pragma once
#include "CoreMinimal.h"
#include "BGWOnlineSession.h"
#include "EBGWJoinSessionResult.h"
#include "EBGWOnlineSessionType.h"
#include "BGW_OnlineSession.generated.h"

UCLASS(Blueprintable)
class UBGW_OnlineSession : public UBGWOnlineSession {
    GENERATED_BODY()
public:
    UBGW_OnlineSession();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJoinSessionCompleteCS(EBGWJoinSessionResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreateSessionCompleteCS(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSessionInviteReceivedCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSearchSessionsCompleteCS(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroySessionCompleteCS(EBGWOnlineSessionType SessionType, bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFindSessionByIdCompleteCS(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSessionUserInviteAcceptedCS(bool bWasSuccess);
    
};

